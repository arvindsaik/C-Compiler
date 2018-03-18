#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    char key[200], value[200];
    int st_state[20][1000];
    int tp[20];
    int num_of_scopes;
    struct table_entry *next;
};

struct table_entry *s_head[n_buckets];
struct table_entry *c_head[n_buckets];


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
  temp->num_of_scopes = -1;
  if(temp==NULL)
  {
    printf("\nCould not allocate memory for the symbol table.");
    exit(1);
  }
  temp->next = NULL;
  return temp;
}

struct table_entry *search(struct table_entry *head, char *key)
{
  struct table_entry *temp = create_node();
  temp = head;
  while(temp!=NULL)
  {
    if(strcmp(temp->key, (char *)key)==0)
      return temp;
    temp = temp->next;
  }
  return temp;
}

void insert(struct table_entry *head[], unsigned int index, char *key, char *value, int *stk,int top)
{

  struct table_entry *temp = search(head[index], key);
  if(temp == NULL){ 
    temp = create_node();
    strcpy(temp->key,key);
    strcpy(temp->value,value);
    temp->next = head[index];
    head[index] = temp;
  }
  ++temp->num_of_scopes;
  temp->tp[temp->num_of_scopes] = top;
  if(top == -1) temp->tp[temp->num_of_scopes] = -1;
  int iter;
  for(iter=0;iter<=top;++iter){
    temp->st_state[temp->num_of_scopes][iter] = stk[iter];
  }
  
}

void install_symbol(char *k, char *v, int *stk, int top)
{
  char *key = (char *)malloc(sizeof(k));
  char *value = (char *)malloc(sizeof(v));

  int *scp_stack = (int *)malloc(sizeof(int)*1000);

  strcpy(key, k);
  strcpy(value, v);
  int iter;
  for(iter=0;iter<=top;++iter){
    scp_stack[iter] = stk[iter];
  }
  unsigned int index = get_hash(key);

  struct table_entry *temp = search(s_head[index], key);
  if(temp!=NULL){
      int i,j;
      int flg1 = 0,flg2 = 0;
      for(i=0;i<=temp->num_of_scopes;++i){
        flg1 = 0;
        for(j=0;j<=temp->tp[i] && j<=top;++j){
          if(temp->st_state[i][j] != stk[j]){
            flg1 = 1;
            break;
          }
        }
        if(flg1 == 0 && temp->tp[i]==top){
          flg2 = 1;
          break;
        }
      }
    if(flg2 == 0)
      insert(s_head, index, key, value,scp_stack,top);
  }
  else{
    insert(s_head, index, key, value,scp_stack,top);
  }
}
/*
void install_constant(char *k, char *v)
{
  char *key = (char *)malloc(sizeof(k));
  char *value = (char *)malloc(sizeof(v));

  strcpy(key, k);
  strcpy(value, v);
  unsigned int index = get_hash(key);

  struct table_entry *temp = search(c_head[index], key);
  if(temp==NULL)
    insert(c_head, index, key, value);
  
}
*/

void print_symbol_table()
{
  int i;
  char a[100]="<";
  printf("%s\n==========================================================================================================================================", KRED);
  printf("%s\n\t\t\t\t\t\t\t\t\tSYMBOL TABLE", KBLU);
  printf("%s\n==========================================================================================================================================", KRED);  
  printf("%s\n%40s%40s%40s", KCYN, "TOKEN", "TOKEN TYPE","STACK");
  for(int i=0;i<n_buckets;i++)
  {
      if(s_head[i]!=NULL)
      { 
        struct table_entry *temp = create_node();
        temp = s_head[i];
        while(temp!=NULL)
        {
          int j;
          // printf("%s\t%d",temp->key,temp->num_of_scopes);
          for(j=0;j<=temp->num_of_scopes;++j){
            printf("%s\n%40s%40s>", KWHT,  (char *)temp->key, strcat(a, (char *)temp->value));
            strcpy(a, "<");
            int iter = 0;
            if(temp->tp[j]==-1)
              printf("%30d", 0);
            for(iter=0;iter<=temp->tp[j];++iter){
              if(iter == 0) printf("%30d ",temp->st_state[j][iter]);
              else
              printf("%d ",temp->st_state[j][iter]);
            }
          }

          temp = temp->next;
        }
      }
  }
  printf("\n");
}
/*
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
          printf("%s\n%40s%40s>", KWHT, (char *)temp->key, strcat(a, (char *)temp->value));
          strcpy(a, "<");
          temp = temp->next;
        }
      }
  }
  printf("\n");
}
*/
struct table_entry * give_scope_struct(char * nm){
  struct table_entry *temp = search(s_head[get_hash(nm)],nm);
  if(temp == NULL) return NULL;
  return temp;
}