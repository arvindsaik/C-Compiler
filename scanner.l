%x comment
%x string_literal
%{
    #include<stdio.h>
  
    #define KNRM  "\x1B[0m"
    #define KRED  "\x1B[31m"
    #define KGRN  "\x1B[32m"
    #define KYEL  "\x1B[33m"
    #define KBLU  "\x1B[34m"
    #define KMAG  "\x1B[35m"
    #define KCYN  "\x1B[36m"
    #define KWHT  "\x1B[37m"

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
BID		([0-9]|!|@|#|$|%)+([a-zA-Z0-9])+

escape_sequence [a|n|b|t|f|r|v|\|"|'|?]
white_space [ \t]
backslash [\]
double_quotes ["]

%%

\n {yylineno++;}
{white_space}*

#include[ ]*<[^>]+> {printf("%s\n\t\t\t%s\t\t\tPreprocessor Directive\t\t\t%d", KBLU, yytext,yylineno);}
printf {printf("%s\n\t\t\tprintf\t\t\t\t\tPre-defined Function\t\t\t\t%d", KBLU, yylineno);strcpy(token, "function");install_symbol();}
scanf {printf("%s\n\t\t\tscanf\t\t\t\t\tPre-defined Function\t\t\t\t%d", KBLU, yylineno);strcpy(token, "function");install_symbol();}
"/*"                    {BEGIN(comment); nested_comment_stack=1; yymore();}
<comment><<EOF>>        {printf("\nMulti-line Comment: \""); yyless(yyleng-2); ECHO; printf("\", not terminted at line no: %d.", yylineno); yyterminate();}
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

"//".*                  {printf("\nSingle-line comment : \"%s\" at line number: %d.", yytext, yylineno);}



<INITIAL>{double_quotes}           		 		{ BEGIN(string_literal); yymore();}
<string_literal>"\\"+{escape_sequence} 				{yymore(); printf("\nEscape Sequence , line number line number: %d.", yylineno);}
<string_literal>"\\"+[^a|n|b|t|f|r|v|\|"|'|?] 			{printf("\nUnrecognized escape seqence at line number: %d.", yylineno);}
<string_literal>{double_quotes}    				{printf("\n\t\t\t%s\t\t\t\t String Constant\t\t\t\t%d.",yytext,yylineno);
                                               			 strcpy(token, "String Constant");  install_constant(); BEGIN(INITIAL);}
<string_literal>\n                 				{printf("\nError : Unterminated string: %s at line number: %d.", yytext, yylineno);yylineno++;}
<string_literal>[^\\]               				{yymore();}

{digit}+	{printf("%s\n\t\t\t%s\t\t\t\t\tInteger Constant\t\t\t%d.", KBLU, yytext,yylineno); strcpy(token, "INT Constant");  install_constant();}
{digit}*\.?{digit}*(E[+|-]?{digit}+*\.?{digit}*)?	{printf("%s\n\t\t\t%s\t\t\t\t\tFP Constant\t\t\t\t%d.", KBLU, yytext,yylineno); strcpy(token, "FP Constant");  install_constant();}
{digit}*\.?{digit}*E.?	{printf("%s\nError No exponent provided: %s , line number: %d.", KBLU, yytext,yylineno);}
\'.\'	{printf("%s\n\t\t\t%s\t\t\t\t\tChar Constant\t\t\t\t%d.", KBLU, yytext,yylineno); strcpy(token, "Char Constant");  install_constant();}

^{white_space}*(unsigned|signed)?(void|int|char|short|long|float|double){white_space}+{identifier}{white_space}*\([^)]*\){white_space}*  {
                                                                                                    if(strstr(yytext, "main")!=NULL)
                                                                                                    {
                                                                                                      printf("%s\n\t\t\tmain\t\t\t\t\tMain Function\t\t\t\t%d", KBLU, yylineno);
                                                                                                      strcpy(token, "function");
                                                                                                      install_symbol();
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                      printf("%s\n\t\t\t%s\t\t\t\tUser Defined Function\t\t\t%d", KBLU, yytext, yylineno);
                                                                                                      strcpy(token, "User-defined Function");
                                                                                                      install_symbol();
                                                                                                    }
                                                                                                }


"auto"                      {printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno); strcpy(token,"Keyword");  install_symbol();}
"break"       							{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"case"        		  				{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"char"        							{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"const"      								{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"continue" 									{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"default"  									{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"do"       									{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"double"   									{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"else"     									{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"enum"        							{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"extern"        						{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"float"        							{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"for"        								{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"goto"     									{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"if"       									{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"int"      									{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"long"     									{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"register"        					{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"return"        						{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"short"       							{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"signed"     								{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"sizeof"     								{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"static"     								{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"struct"        						{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"switch"        						{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"typedef"      							{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"union"    									{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"unsigned"       						{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"void"        		  				{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"volatile"     							{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}
"while"    									{printf("%s\n\t\t\t%s\t\t\t\t\tKeyword\t\t\t\t\t%d.", KBLU, yytext, yylineno);  strcpy(token,"Keyword");  install_symbol();}


\*+[ ]*{identifier} 		          {printf("%s\n\t\t\t%s\t\t\t\t\tPointer declaration\t\t\t\t%d", KBLU, yytext, yylineno);}

{identifier}  							{printf("%s\n\t\t\t%s\t\t\t\t\tIdentifier\t\t\t\t%d.", KBLU, yytext, yylineno); strcpy(token,"Identifier"); install_symbol();}


{BID}			{printf("%s\n\t\t\t%s\t\t\t\t\tInvalid Identifier\t\t\t\t%d.", KRED, yytext, yylineno); }



{identifier}+\[{digit}*\]        {printf("%s\nArray declaration: %s, Line Number: %d", KBLU, yytext, yylineno);}
(\+|-|\*|\/|\&|\[|\]|\>|\<|!=|\+\+|--|\%|>=|<=|==|&&|\|\||!|\+=|-=|\/=|\*=|\%=|\&=|\|=|\^=|\.|\-\>)  {printf("%s\n\t\t\t%s\t\t\t\t\tOperator\t\t\t\t%d.", KBLU, yytext,yylineno); }
[,]                            	 {printf("%s\n\t\t\t%s\t\t\t\t\tSeparator\t\t\t\t%d", KBLU, yytext, yylineno);}
[;]                              {printf("%s\n\t\t\t%s\t\t\t\t\tDelimiter\t\t\t\t%d", KBLU, yytext, yylineno);}
.                                {printf("%s\n\t\t\t%s\t\t\t\t\tInvalid Character\t\t\t%d.", KRED, yytext, yylineno);}
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
  unsigned int index = get_hash(key);

  struct table_entry *temp = search(c_head[index], key);
  if(temp==NULL);
    insert(c_head, index, key, value, yylineno);
}


void print_symbol_table()
{
  int i;
  printf("%s\n==============================================================================================================================================================", KBLU);
  printf("%s\n\t\t\t\t\t\t\t\t\t\tSYMBOL TABLE", KRED);
  printf("%s\n==============================================================================================================================================================", KBLU);  
  printf("%s\n\t\t\t\tToken\t\t\t\t\t\tToken Type\t\t\t\tLine Number\n", KCYN);
  for(int i=0;i<n_buckets;i++)
  {
      if(s_head[i]!=NULL)
      {
        struct table_entry *temp = s_head[i];
        while(temp!=NULL)
        {
          printf("%s\n\t\t\t\t%s\t\t\t\t\t\t<%s>\t\t\t\t%d", KWHT, (char *)temp->key, (char *)temp->value, temp->line);
          temp = temp->next;
        }
      }
  }
  printf("\n");
}

void print_constant_table()
{
  int i;
  printf("%s\n==============================================================================================================================================================", KBLU);
  printf("%s\n\t\t\t\t\t\t\t\t\tCONSTANT TABLE", KRED);
  printf("%s\n==============================================================================================================================================================", KBLU);  
  printf("%s\n\t\t\t\tToken\t\t\t\t\t\tToken Type\t\t\t\tLine Number\n", KCYN);
  for(int i=0;i<n_buckets;i++)
  {
      if(c_head[i]!=NULL)
      {
        struct table_entry *temp = c_head[i];
        while(temp!=NULL)
        {
          printf("%s\n\t\t\t\t%s\t\t\t\t\t\t<%s>\t\t\t\t%d", KWHT, (char *)temp->key, (char *)temp->value, temp->line);
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
  printf("\n===========================================================================================================================================================");
  printf("\n\t\t\tTOKEN\t\t\t\tTOKEN TYPE\t\t\t\tLINE NUMBER");
  printf("\n===========================================================================================================================================================");
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
