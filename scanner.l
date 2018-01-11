%x comment
%x string_literal
%{
   int line_num = 1;
   int nested_comment_stack=0;
   #define ERROR_TOKEN 10
%}

identifier [a-zA-Z_]([a-zA-Z0-9])*
digit [0-9]

escape_sequence [a|n|b|t|f|r|v|\|"|'|?]
next_line [n]
audible_bell [a]
backspace [b]

backslash [\]
double_quotes ["]
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
<string_literal>"\\"+{escape_sequence} {yymore(); printf("\nEscape Sequence encountered at line number: %d.", yylineno);}
<string_literal>"\\"+[^a|n|b|t|f|r|v|\|"|'|?] {printf("\nUnrecognized escape seqence at line number: %d.", yylineno);}
<string_literal>{double_quotes}    {yymore(); printf("\nString: %s at line number: %d.", yytext, yylineno); BEGIN(INITIAL);}
<string_literal>\n                 {printf("\nUnterminated string: %s at line number: %d.", yytext, yylineno);}
<string_literal>[^\\]               {yymore();}


%%
int main()
{
  FILE *fp;
  fp = fopen("input.txt", "r");
  yyin = fp;
	yylex();
  return 0;

}

int yywrap()
{
return 1;
}
