%x comment
%x string_literal
%{
   #define n_buckets 1000
   int line_num = 1;
   int nested_comment_stack=0;
   char token[100];

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
white_space [ \t]
backslash [\]
double_quotes ["]
%%

\n {yylineno++;}
{white_space}*

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
<string_literal>{double_quotes}    {yymore(); printf("\nString: %s at line number: %d.", yytext, yylineno);
                                    strcpy(token, "String Literal");  install_constant(); BEGIN(INITIAL);}
<string_literal>\n                 {printf("\nUnterminated string: %s at line number: %d.", yytext, yylineno);}
<string_literal>[^\\]               {yymore();}


{digit}*\.?{digit}*(E[+|-]?{digit}+*\.?{digit}*)?											{printf("\nFloating point Constant: %s , line number: %d.",yytext,yylineno);
                                                                      strcpy(token, "FP Constant");  install_constant();}
{digit}*\.?{digit}*E.?											{printf("\nError No exponent provided: %s , line number: %d.",yytext,yylineno);}
\'.\'											{printf("\nConstant: %s , line number: %d.",yytext,yylineno);}


"auto"                          {printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"break"       									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"case"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"char"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"const"         								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"continue" 											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"default"  											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"do"       											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"double"   											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"else"     											{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"enum"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"extern"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"float"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"for"        										{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"goto"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"if"        										{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"int"        										{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"long"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"register"        							{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"return"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"short"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"signed"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"sizeof"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"static"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"struct"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"switch"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"typedef"        								{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"union"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"unsigned"       						 		{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"void"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"volatile"        							{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"while"        									{printf("\nKeyword: %s , line number: %d.", yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
{identifier}  									{printf("\nIdentifier: %s , line number: %d.", yytext, yylineno);strcpy(token,"Identifier"); install_symbol();}


{identifier}+\[{digit}*\]				 {printf("\nArray declaration: %s, Line Number: %d", yytext, yylineno);}
\*+[ ]*{identifier} 						 {printf("\nPointer declaration: %s, Line Number: %d", yytext, yylineno);}
(\+|-|\*|\/|\&|\(|\)|\[|\]|\>|\<|!=|\+\+|--|\%|>=|<=|==|&&|\|\||!|\+=|-=|\/=|\*=|\%=|\&=|\|=|\^=)  {printf("\nOperator: %s , line number: %d.",yytext,yylineno); }
[,]                            {printf("\nSeparator: %s, Line Number: %d", yytext, yylineno);}
[;]                              {printf("\nDelimiter: %s, Line Number: %d", yytext, yylineno);}
.                                {printf("\nInvalid Character: %s, Line: %d.", yytext, yylineno);}
%%

unsigned int get_hash(char *str)
{
    unsigned int hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash%1000;
}

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

void insert(struct table_entry *head[], unsigned int index, void *key, void *value, unsigned int line)
{
  struct table_entry *temp = create_node();
  temp->key = key;
  temp->value = value;
  temp->line = line;
  temp->next = head[index];

  head[index] = temp;
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

  strcpy(key, yytext);
  strcpy(value, token);
  unsigned int index = get_hash(key);


  struct table_entry *temp = search(s_head[index], key);
  if(temp==NULL)
    insert(s_head, index, key, value, yylineno);
}

void install_constant()
{
  char *key = (char *)malloc(sizeof(char)*yyleng);
  char *value = (char *)malloc(sizeof(char)*yyleng);

  strcpy(key, yytext);
  strcpy(value, token);
  printf("\n%s, %s\n", key, value);
  unsigned int index = get_hash(key);

  struct table_entry *temp = search(c_head[index], key);
  if(temp==NULL);
    insert(c_head, index, key, value, yylineno);
}


void print_symbol_table()
{
  int i;
  printf("\n\n\n\t\t\t\t\t\tSYMBOL TABLE\n\t\t\t\t\t\t=============\n");
  printf("\n\t\t\tToken\t\t\tToken Type\t\t\tLine Number\n");
  for(int i=0;i<n_buckets;i++)
  {
      if(s_head[i]!=NULL)
      {
        struct table_entry *temp = s_head[i];
        while(temp!=NULL)
        {
          printf("\n\t\t\t%s\t\t\t<%s>\t\t\t%d", (char *)temp->key, (char *)temp->value, temp->line);
          temp = temp->next;
        }
      }
  }
  printf("\n");
}

void print_constant_table()
{
  int i;
  printf("\n\n\n\t\t\t\t\t\tCONSTANT TABLE\n\t\t\t\t\t\t=============\n");
  printf("\n\t\t\tToken\t\t\tToken Type\t\t\tLine Number\n");
  for(int i=0;i<n_buckets;i++)
  {
      if(c_head[i]!=NULL)
      {
        struct table_entry *temp = c_head[i];
        while(temp!=NULL)
        {
          printf("\n\t\t\t%s\t\t\t<%s>\t\t\t%d", (char *)temp->key, (char *)temp->value, temp->line);
          temp = temp->next;
        }
      }
  }
  printf("\n");
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
  print_symbol_table();
  print_constant_table();
  return 0;
}
int yywrap()
{
return 1;
}
