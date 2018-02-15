%x comment
%x string_literal
%{
    #include<stdio.h>

    #include "y.tab.h"

    #define KNRM  "\x1B[0m"
    #define KRED  "\x1B[31m"
    #define KGRN  "\x1B[32m"
    #define KYEL  "\x1B[33m"
    #define KBLU  "\x1B[34m"
    #define KMAG  "\x1B[35m"
    #define KCYN  "\x1B[36m"
    #define KWHT "\x1B[37m"

   int pstack[100];
   int ptop=-1;
   int cstack[100];
   int ctop=-1;
   
   int nested_comment_stack=0;
    extern int line_num;

%}

identifier [a-zA-Z_]([a-zA-Z0-9_])*
digit [0-9]
BID		([0-9]|!|@|#|$|%)+([a-zA-Z0-9])+

escape_sequence [a|n|b|t|f|r|v|\|"|'|?]
white_space [ \t]
backslash [\]
double_quotes ["]

var [ \t]*(unsigned|signed)?(void|int|char|short|long|float|double){white_space}+{identifier}[ \t]*


%%

\n {line_num++;}
{white_space}*

#include[ ]*<[^>]+> {}

"/*"                    {BEGIN(comment); nested_comment_stack=1; yymore();}
<comment><<EOF>>        {printf("\nMulti-line Comment: \""); yyless(yyleng-2); ECHO; printf("\", not terminted."); yyterminate();}
<comment>"/*"           {nested_comment_stack++; yymore();}
<comment>.              {yymore();}
<comment>\n             {yymore();line_num++;}
<comment>"*/"           {nested_comment_stack--;
                        if(nested_comment_stack<0)
                        {
                          printf("\nComment: \"%s\", not balanced at line no: %d.", yytext, line_num);
                          yyterminate();
                        }
                        else if(nested_comment_stack==0)
                        {
                          /*printf("\nMulti-line comment : \"%s\" at line number: %d.", yytext, line_num);*/
                          BEGIN(INITIAL);
                        }
                        else
                          yymore();
                        }

"*/"                    {printf("\n Uninitialised comment at line number: %d.", line_num); yyterminate();}

"//".*                  {/*printf("\nSingle-line comment : \"%s\" at line number: %d.", yytext, line_num);*/}



<INITIAL>{double_quotes}           		 		{ BEGIN(string_literal); yymore();}
<string_literal>"\\"+{escape_sequence} 				{
                                                yymore();}
<string_literal>"\\"+[^a|n|b|t|f|r|v|\|"|'|?] 			printf("\nUnrecognized escape seqence at line number: %d.", line_num);
<string_literal>{double_quotes}    				{strcpy(yylval.lval, yytext);;   BEGIN(INITIAL); return(STRING_LITERAL);}

<string_literal>\n                 				{printf("\n\tError : Unterminated string: %s at line number: %d.", yytext, line_num);line_num++; BEGIN(INITIAL);}
<string_literal>[^\\]               				{yymore();}

{digit}+	{ yylval.val = atoi(yytext);  return CONST_INT;}
{digit}*\.?{digit}*(E[+|-]?{digit}+*\.?{digit}*)?	{ yylval.val = atof(yytext); return CONST_FLOAT; }
{digit}*\.?{digit}*E.?	{ yylval.val = atof(yytext); return CONST_FLOAT;}
\'.\'	{ yylval.lval[0] = yytext[1]; yylval.lval[1] = '\0';  return CONST_CHAR;}



"break"       							{   return BREAK;  }
"char"        							{   strcpy(yylval.lval, yytext); return CHAR;  }
"continue" 									{   return CONTINUE;  }
"else"     									{   return ELSE;  }
"float"        							{   strcpy(yylval.lval, yytext); return FLOAT;  }
"for"        								{   return FOR;  }
"if"       									{   return IF;  }
"int"      									{   strcpy(yylval.lval, yytext); return INT;  }
"long"     									{   return LONG;  }
"return"        						{   return RETURN;  }
"short"       							{   return SHORT;  }
"signed"     								{   return SIGNED;  }
"sizeof"     								{   return SIZEOF;  }
"unsigned"       						{   return UNSIGNED;  }
"void"        		  				{   strcpy(yylval.lval, yytext);return VOID;  }
"while"    									{   return WHILE;  }




{identifier}  							{strcpy(yylval.lval, yytext); return IDENTIFIER; }


{BID}			{printf("%s\n%40s%40s%40d", KRED, yytext, "Invalid Identifier", line_num); }



(\+)  { return('+'); }

(\-)  { return('-'); }

(\*)  { return('*'); }

(\/)  { return('/'); }

(\&)  { return('&'); }

(\>)  { return('&'); }

(\<)  { return('&'); }


(\>\>)  { return(LEFT_OP); }

(\<\<)  { return(RIGHT_OP); }

(\!\=)  { return(NE_OP); }

(\+\+)  { return(INC_OP); }

(\-\-)  { return(DEC_OP); }

(\%)  { return('%'); }

(\>\=)  { return(GE_OP); }

(\<\=)  { return(LE_OP); }

(\=\=)  { return(EQ_OP); }

(\&\&)  { return(AND_OP); }

(\|\|)  { return(OR_OP); }

(\!)  { return('!'); }

(\+\=)  { return(ADD_ASSIGN); }

(\-\=)  { return(SUB_ASSIGN); }

(\/\=)  { return(DIV_ASSIGN); }

(\*\=)  { return(MUL_ASSIGN); }

(\%\=)  { return(MOD_ASSIGN); }

(\&\=)  { return(AND_ASSIGN); }

(\|\=)  { return(OR_ASSIGN); }

(\^\=)  { return(XOR_ASSIGN); }

(\<\<\=)  { return(LEFT_ASSIGN); }


(\>\>\=)  { return(RIGHT_ASSIGN); }


(\=)  { return('='); }


[\)]                              {return ')';}
[\(]                              {return '(';}
[}]                              {return '}';}
[{]                              {return '{';}
[\[]							 {return '[';}
[\]]							 {return ']';}
[;]                              {return ';';}
[\,]                             {return ',';}
[:]                              { return ':';}
\'.                              {}
.                                {}
%%
