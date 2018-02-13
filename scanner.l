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

#include[ ]*<[^>]+> {printf("%s\n%40s%40s%40d", KBLU, yytext,"Preprocessor-directive", yylineno);}
printf {printf("%s\n%40s%40s%40d", KBLU,"printf", "Pre-defined function", yylineno);strcpy(token, "function");}
scanf {printf("%s\n%40s%40s%40d", KBLU,"scanf", "Pre-defined function", yylineno);strcpy(token, "function");}
"/*"                    {BEGIN(comment); nested_comment_stack=1; yymore();}
<comment><<EOF>>        {printf("\nMulti-line Comment: \""); yyless(yyleng-2); ECHO; printf("\", not terminted."); yyterminate();}
<comment>"/*"           {nested_comment_stack++; yymore();}
<comment>.              {yymore();}
<comment>\n             {yymore();yylineno++;}
<comment>"*/"           {nested_comment_stack--;
                        if(nested_comment_stack<0)
                        {
                          printf("\nComment: \"%s\", not balanced at line no: %d.", yytext, yylineno);
                          yyterminate();
                        }
                        else if(nested_comment_stack==0)
                        {
                          /*printf("\nMulti-line comment : \"%s\" at line number: %d.", yytext, yylineno);*/
                          BEGIN(INITIAL);
                        }
                        else
                          yymore();
                        }

"*/"                    {printf("\n Uninitialised comment at line number: %d.", yylineno); yyterminate();}

"//".*                  {/*printf("\nSingle-line comment : \"%s\" at line number: %d.", yytext, yylineno);*/}



<INITIAL>{double_quotes}           		 		{ BEGIN(string_literal); yymore();}
<string_literal>"\\"+{escape_sequence} 				{printf("%s\n%40s%c%39s%40d", KBLU,  "\\", yytext[yyleng-1],"Escape Sequence", yylineno); 
                                                yymore();}
<string_literal>"\\"+[^a|n|b|t|f|r|v|\|"|'|?] 			{printf("\nUnrecognized escape seqence at line number: %d.", yylineno);}
<string_literal>{double_quotes}    				{printf("%s\n%40s%40s%40d",KBLU, yytext, "String Constant",yylineno);
                                               			 strcpy(token, "String Constant");   BEGIN(INITIAL);}
                                                  
<string_literal>\n                 				{printf("\n\tError : Unterminated string: %s at line number: %d.", yytext, yylineno);yylineno++; BEGIN(INITIAL);}
<string_literal>[^\\]               				{yymore();}

{digit}+	{printf("%s\n%40s%40s%40d", KBLU, yytext, "Integer Constant", yylineno); strcpy(token, "INT Constant");  return CONSTANT;}
{digit}*\.?{digit}*(E[+|-]?{digit}+*\.?{digit}*)?	{printf("%s\n%40s%40s%40d", KBLU, yytext, "Floating Point Constant",yylineno); strcpy(token, "FP Constant"); return CONSTANT; }
{digit}*\.?{digit}*E.?	{printf("%s\nError No exponent provided: %s , line number: %d.", KBLU, yytext,yylineno); return CONSTANT;}
\'.\'	{printf("%s\n%40s%40s%40d", KBLU, yytext, "Character Constant",yylineno); strcpy(token, "Char Constant");  return CONSTANT;}



"auto"                      {printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno); strcpy(token,"Keyword"); return AUTO; }
"break"       							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return BREAK;  }
"case"        		  				{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return CASE;  }
"char"        							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return CHAR;  }
"const"      								{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return CONST;  }
"continue" 									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return CONTINUE;  }
"default"  									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return DEFAULT;  }
"do"       									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return DO;  }
"double"   									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return DOUBLE;  }
"else"     									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return ELSE;  }
"enum"        							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return ENUM;  }
"extern"        						{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return EXTERN;  }
"float"        							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return FLOAT;  }
"for"        								{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return FOR;  }
"goto"     									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return GOTO;  }
"if"       									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return IF;  }
"int"      									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return INT;  }
"long"     									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return LONG;  }
"register"        					{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return REGISTER;  }
"return"        						{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return RETURN;  }
"short"       							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return SHORT;  }
"signed"     								{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return SIGNED;  }
"sizeof"     								{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return SIZEOF;  }
"static"     								{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return STATIC;  }
"struct"        						{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return STRUCT;  }
"switch"        						{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return SWITCH;  }
"typedef"      							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return TYPEDEF;  }
"union"    									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return UNION;  }
"unsigned"       						{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return UNSIGNED;  }
"void"        		  				{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return VOID;  }
"volatile"     							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return VOLATILE;  }
"while"    									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword"); return WHILE;  }




{identifier}  							{printf("%s\n%40s%40s%40d", KBLU,  yytext, "Identifier", yylineno); strcpy(token,"Identifier"); return IDENTIFIER; }


{BID}			{printf("%s\n%40s%40s%40d", KRED, yytext, "Invalid Identifier", yylineno); }



(\+)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(ADD_OP); }

(\-)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(SUB_OP); }

(\*)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(MUL_OP); }

(\/)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(DIV_OP); }

(\&)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(AND_OP); }

(\>)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(GREAT_OP); }

(\<)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(LESS_OP); }

(\!\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(NE_OP); }

(\+\+)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(INC_OP); }

(\-\-)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(DEC_OP); }

(\%)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(MOD_OP); }

(\>\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(GE_OP); }

(\<\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(LE_OP); }

(\=\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(EQ_OP); }

(\&\&)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(AND_OP); }

(\|\|)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(OR_OP); }

(\!)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(NOT_OP); }

(\+\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(ADD_ASSIGN); }

(\-\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(SUB_ASSIGN); }

(\/\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(DIV_ASSIGN); }

(\*\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(MUL_ASSIGN); }

(\%\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(MOD_ASSIGN); }

(\&\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(AND_ASSIGN); }

(\|\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(OR_ASSIGN); }

(\^\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(XOR_ASSIGN); }

(\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(EQ_ASSIGN); }


[\)]                              {return ')';}
[\(]                              {return '(';}
[}]                              {return '}';}
[{]                              {return '{';}

[,]                            	 {printf("%s\n%40s%40s%40d", KBLU, yytext, "Separator", yylineno); return ',';}
[;]                              {printf("%s\n%40s%40s%40d", KBLU, yytext, "Delimiter",yylineno); return ';';}
\'.                              {printf("%s\n\tUnterminated CHARACTER LITERAL: %s, \tline no:%d\n",KRED, yytext, yylineno);}
.                                {printf("%s\n%40s%40s%40d", KRED, yytext, "Invalid Character", yylineno);}
%%



/*
int main()
{
  FILE *fp;
  fp = fopen("sample.c", "r");
  yyin = fp;
  printf("\n===========================================================================================================================================================");
  printf("\n%40s%40s%40s", "TOKEN", "TOKEN TYPE", "LINE NUMBER");
  printf("\n===========================================================================================================================================================");
  int newtoken = 1;
  while(newtoken){
	newtoken = yylex();
  }
  if(ptop!=-1)
  {
    printf("%s\n\n\t\t\'(\' has not been matched at line number %d.", KRED, pstack[ptop]);
  }
  if(ctop!=-1)
  {
    printf("%s\n\n\t\t\'{\' has not been matched at line number %d.", KRED, cstack[ctop]);
  }
  print_symbol_table();
  print_constant_table();
  return 0;
}
int yywrap()
{
  return 1;
}
*/
