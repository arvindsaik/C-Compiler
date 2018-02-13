%x comment
%x string_literal
%{
    #include<stdio.h>

    #include "y.tab.h"
    #include "lib.h"  

   int pstack[100];
   int ptop=-1;
   int cstack[100];
   int ctop=-1;
   int line_num = 1;
   int nested_comment_stack=0;

%}

identifier [a-zA-Z_]([a-zA-Z0-9])*
digit [0-9]
BID		([0-9]|!|@|#|$|%)+([a-zA-Z0-9])+

escape_sequence [a|n|b|t|f|r|v|\|"|'|?]
white_space [ \t]
backslash [\]
double_quotes ["]

var [ \t]*(unsigned|signed)?(void|int|char|short|long|float|double){white_space}+{identifier}[ \t]*


%%

\n {yylineno++;}
{white_space}*

#include[ ]*<[^>]+> {}
printf {strcpy(token, "function");}
scanf {strcpy(token, "function");}
"/*"                    {BEGIN(comment); nested_comment_stack=1; yymore();}
<comment><<EOF>>        { yyless(yyleng-2); ECHO;  yyterminate();}
<comment>"/*"           {nested_comment_stack++; yymore();}
<comment>.              {yymore();}
<comment>\n             {yymore();yylineno++;}
<comment>"*/"           {nested_comment_stack--;
                        if(nested_comment_stack<0)
                        {
                          
                          yyterminate();
                        }
                        else if(nested_comment_stack==0)
                        {
                          /**/
                          BEGIN(INITIAL);
                        }
                        else
                          yymore();
                        }

"*/"                    { yyterminate();}

"//".*                  {/**/}



<INITIAL>{double_quotes}           		 		{ BEGIN(string_literal); yymore();}
<string_literal>"\\"+{escape_sequence} 				{ 
                                                yymore();}
<string_literal>"\\"+[^a|n|b|t|f|r|v|\|"|'|?] 			{}
<string_literal>{double_quotes}    				{
                                               			 strcpy(token, "String Constant");   BEGIN(INITIAL);}
                                                  
<string_literal>\n                 				{yylineno++; BEGIN(INITIAL);}
<string_literal>[^\\]               				{yymore();}

{digit}+	{ strcpy(token, "INT Constant");  return CONSTANT;}
{digit}*\.?{digit}*(E[+|-]?{digit}+*\.?{digit}*)?	{ strcpy(token, "FP Constant"); return CONSTANT; }
{digit}*\.?{digit}*E.?	{ return CONSTANT;}
\'.\'	{ strcpy(token, "Char Constant");  return CONSTANT;}



"break"       							{  strcpy(token,"Keyword"); return BREAK;  }
"char"        							{  strcpy(token,"Keyword"); return CHAR;  }
"continue" 									{  strcpy(token,"Keyword"); return CONTINUE;  }
"else"     									{  strcpy(token,"Keyword"); return ELSE;  }
"float"        							{  strcpy(token,"Keyword"); return FLOAT;  }
"for"        								{  strcpy(token,"Keyword"); return FOR;  }
"if"       									{  strcpy(token,"Keyword"); return IF;  }
"int"      									{  strcpy(token,"Keyword"); return INT;  }
"long"     									{  strcpy(token,"Keyword"); return LONG;  }
"return"        						{  strcpy(token,"Keyword"); return RETURN;  }
"short"       							{  strcpy(token,"Keyword"); return SHORT;  }
"signed"     								{  strcpy(token,"Keyword"); return SIGNED;  }
"sizeof"     								{  strcpy(token,"Keyword"); return SIZEOF;  }
"unsigned"       						{  strcpy(token,"Keyword"); return UNSIGNED;  }
"void"        		  				{  strcpy(token,"Keyword"); return VOID;  }
"while"    									{  strcpy(token,"Keyword"); return WHILE;  }




{identifier}  							{ strcpy(token,"Identifier"); return IDENTIFIER; }


{BID}			{ }



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

[;]                              { return ';';}
[,]                            	 { return ',';}
[:]                              { return ':';}
\'.                              {}
.                                {}
%%


