%x comment
%x string_literal
%{
   int line_num = 1;
   int nested_comment_stack=0;

   #define ERROR_TOKEN 10
   #define AUTO 20
 	 #define BREAK 21
   #define CASE 22
   #define CHAR 23
   #define CONST 24
   #define CONTINUE 25
   #define DEFAULT 26
   #define DO 27
   #define DOUBLE 28
   #define ELSE 29
   #define ENUM 30
   #define EXTERN 31
   #define FLOAT 32
   #define FOR 32
   #define GOTO 34 
   #define IF 35
   #define INT 36
   #define LONG 37
   #define REGISTER 38
   #define RETURN 39
   #define SHORT 40
   #define SIGNED 41
   #define SIZEOF 42
   #define STATIC 43
   #define STRUCT 44
   #define SWITCH 45
   #define TYPEDEF 46
   #define UNION 47
   #define UNSIGNED 48
   #define VOID 49
   #define VOLATILE 50
   #define WHILE 51
     
%}

identifier [a-zA-Z_]([a-zA-Z0-9])*
digit [0-9]

escape_sequence [a|n|b|t|f|r|v|\|"|'|?]
next_line [n]
audible_bell [a]
backspace [b]

backslash [\]
double_quotes ["]
operators [+|-|*|/|&|\(|\)|\[|\]|>|<|>=|<=|&&|==|!=]
%%

\n {yylineno++;}


"/*"                    {BEGIN(comment); nested_comment_stack=1; yymore();}
<comment><<EOF>>        {printf("\nMulti-line Comment: \""); yyless(yyleng-2); ECHO; printf("\", not terminted at line no: %d.", yylineno); yyterminate();}
<comment>"/*"           {nested_comment_stack++; yymore();}
<comment>.              {yymore();}
<comment>\n             {yymore();}
<comment>"*/"           {nested_comment_stack--;
                        if(nested_comment_stack<0)
                        {
                          printf("\nComment: \"%s\", not balanced at line no: %d.", yytext, yylineno);
                          yyterminate();
                        }
                        else if(nested_comment_stack==0)
                        {
                          printf("\nMulti-line comment : \"%s\" at line number: %d.", yytext, yylineno);
                          BEGIN(INITIAL);
                        }
                        else
                          yymore();
                        };

"*/"                    {printf("\n Uninitialised comment at line number: %d.", yylineno); yyterminate();}

"//".*                  {printf("\nSingle-line comment : \"%s\" at line number: %d.", yytext, yylineno);}



<INITIAL>{double_quotes}           { BEGIN(string_literal); yymore();}
<string_literal>"\\"+{escape_sequence} {yymore(); printf("\nEscape Sequence , line number line number: %d.", yylineno);}
<string_literal>"\\"+[^a|n|b|t|f|r|v|\|"|'|?] {printf("\nUnrecognized escape seqence at line number: %d.", yylineno);}
<string_literal>{double_quotes}    {yymore(); printf("\nString: %s at line number: %d.", yytext, yylineno); BEGIN(INITIAL);}
<string_literal>\n                 {printf("\nUnterminated string: %s at line number: %d.", yytext, yylineno);}
<string_literal>[^\\]               {yymore();}
                      
[+|-]?{digit}*\.?{digit}*(E[+|-]?{digit}+*\.?{digit}*)?											{printf("\nConstant: %s , line number: %d.",yytext,yylineno);}
[+|-]?{digit}*\.?{digit}*E.?											{printf("\nError No exponent provided: %s , line number: %d.",yytext,yylineno);}
\'.\'											{printf("\nConstant: %s , line number: %d.",yytext,yylineno);}
{operators} 										{printf("\nOperator: %s , line number: %d.",yytext,yylineno);} 

"auto"                          {printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(AUTO);}   
"break"       									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(BREAK);}
"case"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(CASE);}
"char"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(CHAR);}
"const"         								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(CONST);}
"continue" 											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(CONTINUE);}       
"default"  											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(DEFAULT);}      
"do"       											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(DO);} 
"double"   											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(DOUBLE);}     
"else"     											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(ELSE);}   
"enum"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(ENUM);}
"extern"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(EXTERN);}
"float"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(FLOAT);}
"for"        										{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(FOR);}
"goto"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(GOTO);}
"if"        										{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(IF);}
"int"        										{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(INT);}
"long"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(LONG);}
"register"        							{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(REGISTER);}
"return"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(RETURN);}
"short"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(SHORT);}
"signed"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(SIGNED);}
"sizeof"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(SIZEOF);}
"static"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(STATIC);}
"struct"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(STRUCT);}
"switch"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(SWITCH);}
"typedef"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(TYPEDEF);}
"union"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(UNION);}
"unsigned"       						 		{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(UNSIGNED);}
"void"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(VOID);}
"volatile"        							{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(VOLATILE);}
"while"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); return(WHILE);}
{identifier}  									{printf("\nIdentifier: %s , line number: %d.", yytext, yylineno);}
.
%%
int main()
{
  FILE *fp;
  fp = fopen("sample.c", "r");
  yyin = fp;
  int newtoken = 1; 
  while(newtoken){
	newtoken = yylex();
  }
	
  return 0;

}

int yywrap()
{
return 1;
}
