#include <stdio.h>
#include <string.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#define n_buckets 1000

struct table_entry
{
    void *key, *value;
    struct table_entry *next;
};

struct table_entry *s_head[n_buckets];
struct table_entry *c_head[n_buckets];
char token[100];

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

void insert(struct table_entry *head[], unsigned int index, void *key, void *value)
{
  struct table_entry *temp = create_node();
  temp->key = key;
  temp->value = value;
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
    insert(s_head, index, key, value);
}

void install_constant()
{
  char *key = (char *)malloc(sizeof(char)*yyleng);
  char *value = (char *)malloc(sizeof(char)*yyleng);

  strcpy(key, yytext);
  strcpy(value, token);
  unsigned int index = get_hash(key);

  struct table_entry *temp = search(c_head[index], key);
  if(temp==NULL)
    insert(c_head, index, key, value);
}


void print_symbol_table()
{
  int i;
  char a[100]="<";
  printf("%s\n==============================================================================================================================================================", KRED);
  printf("%s\n\t\t\t\t\t\t\t\t\tSYMBOL TABLE", KBLU);
  printf("%s\n==============================================================================================================================================================", KRED);  
  printf("%s\n%40s%40s", KCYN, "TOKEN", "TOKEN TYPE");
  for(int i=0;i<n_buckets;i++)
  {
      if(s_head[i]!=NULL)
      {
        struct table_entry *temp = s_head[i];
        while(temp!=NULL)
        {
          printf("%s\n%40s%40s", KWHT, (char *)temp->key, strcat(a, (char *)temp->value));
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
  printf("%s\n%40s%40s", KCYN, "TOKEN", "TOKEN TYPE");
  for(int i=0;i<n_buckets;i++)
  {
      if(c_head[i]!=NULL)
      {
        struct table_entry *temp = c_head[i];
        while(temp!=NULL)
        {
          printf("%s\n%40s%40s", KWHT, (char *)temp->key, strcat(a, (char *)temp->value));
          strcpy(a, "<");
          temp = temp->next;
        }
      }
  }
  printf("\n");
}
