%x comment
%x string_literal
%{
   #define n_buckets 1000
   int line_num = 1;
   int nested_comment_stack=0;

   struct table_entry
   {
      void *key, *value;
      struct table_entry *next;
      unsigned int line;
   };

   struct table_entry *s_head[n_buckets];
   struct table_entry *c_head[n_buckets];

   void install_symbol();
   void install_constant();

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

#include[ ]*<[^>]+> {printf("\nPreprocessor directive : %s, line number : %d",yytext,yylineno);}

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


{digit}*\.?{digit}*(E[+|-]?{digit}+*\.?{digit}*)?											{printf("\nConstant: %s , line number: %d.",yytext,yylineno);}
{digit}*\.?{digit}*E.?											{printf("\nError No exponent provided: %s , line number: %d.",yytext,yylineno);}
\'.\'											{printf("\nConstant: %s , line number: %d.",yytext,yylineno);}


"auto"                          {printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"break"       									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"case"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"char"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"const"         								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"continue" 											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"default"  											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"do"       											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"double"   											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"else"     											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"enum"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"extern"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"float"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"for"        										{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"goto"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"if"        										{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"int"        										{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"long"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"register"        							{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"return"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"short"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"signed"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"sizeof"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"static"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"struct"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"switch"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"typedef"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"union"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"unsigned"       						 		{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"void"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"volatile"        							{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
"while"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); }
{identifier}  									{printf("\nIdentifier: %s , line number: %d.", yytext, yylineno);}


{identifier}+\[{digit}*\]				 {printf("\nArray declaration: %s, Line Number: %d", yytext, yylineno);}
\*+[ ]*{identifier} 						 {printf("\nPointer declaration: %s, Line Number: %d", yytext, yylineno);}
(\+|-|\*|\/|\&|\(|\)|\[|\]|\>|\<|!=|\+\+|--|\%|>=|<=|==|&&|\|\||!|\+=|-=|\/=|\*=|\%=|\&=|\|=|\^=)  {printf("\nOperator: %s , line number: %d.",yytext,yylineno); }
.                                {printf("\nInvalid Character: %s, Line: %d.", yytext, yylineno);}
%%

struct table_entry *create_node()
{
  struct table_entry *temp = (struct table_entry *)malloc(sizeof(struct table_entry));
  if(temp==NULL)
  {
    printf("\nCould not allocate memory for the symbol table.");
    exit(1);
  }
  temp->next = NULL;
  return temp;
}

struct table_entry *insert(struct table_entry *head, void *key, void *value, unsigned int line)
{
  struct table_entry *temp = create_node();
  temp->key = key;
  temp->value = value;
  temp->next = head;
  temp->line = line;

  head = temp;
  return head;
}

struct table_entry *search(struct table_entry *head, void *key)
{
  struct table_entry *temp = head;
  while(temp!=NULL)
  {
    if(strcmp((char *)temp->key, (char *)key)==0)
      return temp;
    temp = temp->next;
  }
  return temp;
}

void install_symbol()
{
  char *key = (char *)malloc(sizeof(char)*yyleng);
  char *value = (char *)malloc(sizeof(char)*yyleng);

  unsigned int index = hash(key);
  strcpy(key, yytext);
  strcpy(value, token);

  struct table *temp = search(s_head[index], key);
  if(temp==NULL)
    (void *)insert(s_head[index], key, val, yylineno);
}

void install_constant()
{
  char *key = (char *)malloc(sizeof(char)*yyleng);
  char *value = (char *)malloc(sizeof(char)*yyleng);

  unsigned int index = hash(key);
  strcpy(key, yytext);
  strcpy(value, token);

  struct table *temp = search(c_head[index], key);
  if(temp==NULL)
    (void *)insert(c_head[index], key, val, yylineno);
}


unsigned int hash(unsigned char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash%1000;
}



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
