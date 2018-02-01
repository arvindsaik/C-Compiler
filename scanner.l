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
   int pstack[100];
   int ptop=-1;
   int cstack[100];
   int ctop=-1;
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

var [ \t]*(unsigned|signed)?(void|int|char|short|long|float|double){white_space}+{identifier}[ \t]*


%%

\n {yylineno++;}
{white_space}*

#include[ ]*<[^>]+> {printf("%s\n%40s%40s%40d", KBLU, yytext,"Preprocessor-directive", yylineno);}
printf {printf("%s\n%40s%40s%40d", KBLU,"printf", "Pre-defined function", yylineno);strcpy(token, "function");install_symbol();}
scanf {printf("%s\n%40s%40s%40d", KBLU,"scanf", "Pre-defined function", yylineno);strcpy(token, "function");install_symbol();}
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
                                               			 strcpy(token, "String Constant");  install_constant(); BEGIN(INITIAL);}
                                                  
<string_literal>\n                 				{printf("\n\tError : Unterminated string: %s at line number: %d.", yytext, yylineno);yylineno++; BEGIN(INITIAL);}
<string_literal>[^\\]               				{yymore();}

{digit}+	{printf("%s\n%40s%40s%40d", KBLU, yytext, "Integer Constant", yylineno); strcpy(token, "INT Constant");  install_constant();}
{digit}*\.?{digit}*(E[+|-]?{digit}+*\.?{digit}*)?	{printf("%s\n%40s%40s%40d", KBLU, yytext, "Floating Point Constant",yylineno); strcpy(token, "FP Constant");  install_constant();}
{digit}*\.?{digit}*E.?	{printf("%s\nError No exponent provided: %s , line number: %d.", KBLU, yytext,yylineno);}
\'.\'	{printf("%s\n%40s%40s%40d", KBLU, yytext, "Character Constant",yylineno); strcpy(token, "Char Constant");  install_constant();}

^{white_space}*(unsigned|signed)?(void|int|char|short|long|float|double){white_space}+{identifier}{white_space}*\((({var},)*{var})?\){white_space}*  {
                                                                                                    if(strstr(yytext, "main")!=NULL)
                                                                                                    {
                                                                                                      printf("%s\n%40s%40s%40d", KBLU, "main", "Main Function", yylineno);
                                                                                                      strcpy(token, "Main function");
                                                                                                      
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                      printf("%s\n%40s%40s%40d", KBLU,  yytext, "User-defined function", yylineno);
                                                                                                      strcpy(token, "User Defined function");
                                                                                                      
                                                                                                    }
                                                                                                    install_symbol();
                                                                                                }


^{white_space}*(unsigned|signed)?(void|int|char|short|long|float|double){white_space}+{identifier}{white_space}*\([^)]*\){white_space}*     {
                                                                                                  printf("%s\n%40s%40s%40d", KRED, yytext, "Invalid Function", yylineno);
                                                                                                            }

"auto"                      {printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno); strcpy(token,"Keyword");  install_symbol();}
"break"       							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"case"        		  				{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"char"        							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"const"      								{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"continue" 									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"default"  									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"do"       									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"double"   									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"else"     									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"enum"        							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"extern"        						{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"float"        							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"for"        								{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"goto"     									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"if"       									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"int"      									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"long"     									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"register"        					{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"return"        						{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"short"       							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"signed"     								{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"sizeof"     								{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"static"     								{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"struct"        						{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"switch"        						{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"typedef"      							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"union"    									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"unsigned"       						{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"void"        		  				{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"volatile"     							{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}
"while"    									{printf("%s\n%40s%40s%40d", KBLU, yytext, "Keyword", yylineno);  strcpy(token,"Keyword");  install_symbol();}



{identifier}  							{printf("%s\n%40s%40s%40d", KBLU,  yytext, "Identifier", yylineno); strcpy(token,"Identifier"); install_symbol();}


{BID}			{printf("%s\n%40s%40s%40d", KRED, yytext, "Invalid Identifier", yylineno); }


^{white_space}*(unsigned|signed)?(void|int|char|short|long|float|double){white_space}+\*+[ ]*{identifier} 		          {printf("%s\n%40s%40s%40d", KBLU, yytext, "Pointer Declration", yylineno);}
{identifier}+\[{digit}*\]        {printf("%s\n%40s%40s%40d", KBLU, yytext, "Array Declaration", yylineno);}

[\(]        {if(ptop==-1)
              {
                ptop=0;
                pstack[ptop] = yylineno;
              }
              else
              {
                ptop++;
                pstack[ptop] = yylineno;
              }
              printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno);
            }

[\)]      {
            if(ptop==0)
             {
               ptop=-1;
             } 
             else
             {
                ptop--;
             }
              printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno);
          }

[\{]        {if(ctop==-1)
              {
                ctop=0;
                cstack[ctop] = yylineno;
              }
              else
              {
                ctop++;
                cstack[ctop] = yylineno;
              }
              printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno);
            }

[\}]      {
            if(ctop==0)
             {
               ctop=-1;
             } 
             else
             {
                ctop--;
             }
              printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno);
          }


(\+)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(ADD_OP); }

(\-)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(SUB_OP); }

(\*)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(MUL_OP); }

(\/)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(DIV_OP); }

(\&)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(AND_OP); }

(\-)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(SUB_OP); }

(\>)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(GREAT_OP); }

(\<)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(LESS_OP); }

(\!\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(NE_OP); }

(\+\+)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(INC_OP); }

(\-\-)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(DEC_OP); }

(\%)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(MOD_OP); }

(\>\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(GE_OP); }

(\<\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(LE_OP); }

(\=\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(EQ_OP); }

(\&\&)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\|\|)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\!)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\+\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\-\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\/\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\*\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\%\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\&\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\|\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\^\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\-\>)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\=)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\{)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\})  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\()  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\))  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }

(\-)  {printf("%s\n%40s%40s%40d", KBLU, yytext, "Operator",yylineno); return(IDENTIFIER); }


[,]                            	 {printf("%s\n%40s%40s%40d", KBLU, yytext, "Separator", yylineno);}
[;]                              {printf("%s\n%40s%40s%40d", KBLU, yytext, "Delimiter",yylineno);}
\'.                              {printf("%s\n\tUnterminated CHARACTER LITERAL: %s, \tline no:%d\n",KRED, yytext, yylineno);}
.                                {printf("%s\n%40s%40s%40d", KRED, yytext, "Invalid Character", yylineno);}
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
  char a[100]="<";
  printf("%s\n==============================================================================================================================================================", KRED);
  printf("%s\n\t\t\t\t\t\t\t\t\tSYMBOL TABLE", KBLU);
  printf("%s\n==============================================================================================================================================================", KRED);  
  printf("%s\n%40s%40s%40s", KCYN, "TOKEN", "TOKEN TYPE", "LINE NUMBER");
  for(int i=0;i<n_buckets;i++)
  {
      if(s_head[i]!=NULL)
      {
        struct table_entry *temp = s_head[i];
        while(temp!=NULL)
        {
          printf("%s\n%40s%40s>%40d", KWHT, (char *)temp->key, strcat(a, (char *)temp->value), temp->line);
          strcpy(a, "<");
          temp = temp->next;
        }
      }
  }
  printf("\n");
}

void print_constant_table()
{int i;
  char a[100]="<";
  printf("%s\n==============================================================================================================================================================", KRED);
  printf("%s\n\t\t\t\t\t\t\t\t\tCONSTANT TABLE", KBLU);
  printf("%s\n==============================================================================================================================================================", KRED);  
  printf("%s\n%40s%40s%40s", KCYN, "TOKEN", "TOKEN TYPE", "LINE NUMBER");
  for(int i=0;i<n_buckets;i++)
  {
      if(c_head[i]!=NULL)
      {
        struct table_entry *temp = c_head[i];
        while(temp!=NULL)
        {
          printf("%s\n%40s%40s>%40d", KWHT, (char *)temp->key, strcat(a, (char *)temp->value), temp->line);
          strcpy(a, "<");
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
