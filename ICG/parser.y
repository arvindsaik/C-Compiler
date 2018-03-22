%token RETURN BREAK
%token UNSIGNED SIGNED
%token DO WHILE FOR IF ELSE CASE DEFAULT
%token L_BRACE R_BRACE L_SQ_BRACE R_SQ_BRACE L_PAREN R_PAREN DOT
%token SEMICOLON COLON
%token INCR DECR
%token NOT BNOT
%left MULTIPLY DIVIDE MOD
%left PLUS MINUS
%left GREAT LESS EGREAT ELESS
%left EQUALITY NEQUAL
%left BAND
%left CARROT
%left BOR
%left AND
%left OR
%right EQUAL PEQUAL MEQUAL SEQUAL BEQUAL
%left COMMA

%expect 5
%union {
		char lval[100];
		double val;
		char val2[100];
}
%token <lval> CHAR FLOAT VOID INT
%token <lval> IDENTIFIER
%token <val> CONST_FLOAT CONST_INT
%token <val2> CONST_CHAR CONST_STR
%type <lval> NUM_TYPE DEC2 DEC_ARR LVAL ARR
%type <lval> NUM EXPR0 EXPR1 EXPR1G EXPR1F EXPR1E EXPR1D EXPR1C EXPR1B EXPR1A EXPR2 EXPR3 EXPR3A EXPR4 FUNC_CALL
%{
	#include "lib.h"
	#include <stdlib.h>
	#define OUT stdout
	#define SIZE 100
	int line=1;
    int yylex(void);
    FILE *yyin;
	int yyerror(const char *s);
	int check_scope(char *msg);
	void codegen();
	char *ret_type(char *a,char *b);
	int ret_num(char *a);
	int st[1000];
  	int brack_num = 0;
  	int top = -1;
	char id[100];
	int flag = 0;
	char rnum = "0 ";
	char return_type[20];
	struct func_param temp[20];
	struct func_param func_call[20];
	int func_call_param = -1;
	int num_params = -1;
%}
%%
// Start symbol, everything allowed outside main
START
	: START DEC0 SEMICOLON
	| START FUNC_DEC SEMICOLON
	| START FUNC_DEF
	| SEMICOLON
	|
	;

// Different types of statements
STATEMENT_BLOCK
	: STATEMENT_BLOCK STATEMENT
	| STATEMENT
	;
STATEMENT
	: EXPR0 SEMICOLON
	| DEC0 SEMICOLON
	| IF_CONS
	| FOR_LOOP
	| WHILE_LOOP
	| DO_WHILE
	| L_BRACE STATEMENT_BLOCK R_BRACE
	| L_BRACE R_BRACE
	| RETURN EXPR1 SEMICOLON	{ if(strcmp(return_type, $2)!=0) printf("Return type is not correct at line: %d.\n", line);}
	| RETURN SEMICOLON				{if(strcmp(return_type, "void")!=0) printf("Return type is not correct at line: %d.\n", line);}
	| BREAK SEMICOLON
	| SEMICOLON
	;

// If construct
IF_CONS
	: IF L_PAREN EXPR0 R_PAREN STATEMENT {if(strcmp($3,"int") != 0){printf("expresion in if not of type int in line %d\n",line-1);}}
	| IF L_PAREN EXPR0 R_PAREN STATEMENT ELSE STATEMENT {if(strcmp($3,"int") != 0){printf("expresion in if not of type int in line %d\n",line-1);}}
	;

// While Loop
WHILE_LOOP
	: WHILE L_PAREN EXPR0 R_PAREN STATEMENT {if(strcmp($3,"int") != 0){printf("expresion in while not of type int in line %d\n",line);}}
	;

// Do-While
DO_WHILE
	: DO STATEMENT WHILE L_PAREN EXPR0 R_PAREN SEMICOLON {if(strcmp($5,"int") != 0){printf("expresion in do while not of type int in line %d\n",line);}}
	;

// For Loop
FOR_LOOP
	: FOR L_PAREN FOR_PAR SEMICOLON FOR_PAR SEMICOLON FOR_PAR R_PAREN STATEMENT
	;
FOR_PAR
	: EXPR0
	|
	;


// Function Declarations/Definitions
FUNC_DEC
	: CHAR IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN {strcpy(return_type, $1);
													struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
													t = give_scope_struct($2);
													if(t==NULL)
													{
													install_symbol($2,id, st, top,-1, return_type, 	temp, num_params,1);
													}
													else
														printf("Invalid function name %s: at line number %d.\n", $2, line);
													num_params=-1;}
	| NUM_TYPE IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN {strcpy(return_type, $1);
													struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
													t = give_scope_struct($2);
													if(t==NULL)
													{
													install_symbol($2,$1, st, top,-1, return_type, 	temp, num_params,1);
													}
													else
														printf("Invalid function name %s: at line number %d.\n", $2, line);
													num_params=-1;}
	| VOID IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN {strcpy(return_type, $1);
													struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
													t = give_scope_struct($2);
													if(t==NULL)
													{
													install_symbol($2,id, st, top,-1, return_type, 	temp, num_params,1);
													}
													else
														printf("Invalid function name %s: at line number %d.\n", $2, line);
													num_params=-1;}
	;
FUNC_DEF
	: FUNC_DEC L_BRACE STATEMENT_BLOCK R_BRACE	{}
	;
FUNC_PARAMS
	: FUNC_PARAMS1
	|
	;
FUNC_PARAMS1
	: NUM_TYPE IDENTIFIER COMMA FUNC_PARAMS1 {strcpy(temp[++num_params].datatype, $1);
																st[++top] = brack_num+1;install_symbol($2, $1, st, top,-1, return_type, temp, num_params, 0);	top--;}
	| CHAR IDENTIFIER COMMA FUNC_PARAMS1 {strcpy(temp[++num_params].datatype, "void");
																st[++top] = brack_num+1;strcpy(id, $1);install_symbol($2,$1, st, top,-1, return_type, temp, num_params, 0);	top--;}

	| NUM_TYPE IDENTIFIER {strcpy(temp[++num_params].datatype, $1);
												st[++top] = brack_num+1;install_symbol($2, $1, st, top,-1, return_type, temp, num_params, 0);	top--;}
	| CHAR IDENTIFIER {strcpy(temp[++num_params].datatype, "char");
											strcpy(id, $1); st[++top] = brack_num+1;install_symbol($2, $1, st, top,-1, return_type, temp, num_params, 0);	top--;}
	;
FUNC_CALL
: IDENTIFIER L_PAREN FUNC_LIST R_PAREN	{
																struct table_entry *temp = (struct table_entry *)malloc(sizeof(struct table_entry));
																temp = give_scope_struct($1);
																if(temp!=NULL && temp->is_func==1 && strcmp("printf", $1)!=0 && ((temp->num_params)==func_call_param))
																{
																		int flag=0;
																		for(int i=0;i<=func_call_param;i++)
																		{
																			if(strcmp(temp->params[i].datatype, ret_type(func_call[temp->num_params-i].datatype, temp->params[i].datatype))!=0)
																			{
																				flag = 1;
																				break;
																			}
																		}
																		if(flag)
																		{
																				printf("Invalid function call: %s.\n", $1);
																		}
																}
																else
																{
																		printf("Invalid function call: %s.\n", $1);

																}

																func_call_param=-1;
																if(temp!=NULL)
																	strcpy($$, temp->return_type);

																					}
	| IDENTIFIER L_PAREN R_PAREN	{
															struct table_entry *temp = (struct table_entry *)malloc(sizeof(struct table_entry));
															temp = give_scope_struct($1);
															if(temp!=NULL && temp->is_func==1 && strcmp("printf", $1)!=0 && ((temp->num_params)==func_call_param))
															{

															}
															else
															{
																	printf("Invalid function call: %s.\n", $1);

															}

															func_call_param=-1;
															if(temp!=NULL)
																strcpy($$, temp->return_type);
	}
	;
FUNC_LIST
	: EXPR1												{strcpy(func_call[++func_call_param].datatype, $1);}
	| CONST_STR 									{strcpy(func_call[++func_call_param].datatype, "char*");}
	| EXPR1 COMMA FUNC_LIST				{strcpy(func_call[++func_call_param].datatype, $1);}
	| CONST_CHAR COMMA FUNC_LIST  {strcpy(func_call[++func_call_param].datatype, "char");}
	| CONST_STR COMMA FUNC_LIST   {strcpy(func_call[++func_call_param].datatype, "char*");}
	;

// Variable Declarations
DEC0
	: NUM_TYPE DEC1
	| CHR_TYPE DEC1
	;
CHR_TYPE
	: CHAR {strcpy(id, $1);} // added so that char comes in type in symbol table
DEC1
	: DEC1 COMMA DEC2
	| DEC2
	;
DEC2
	: IDENTIFIER EQUAL EXPR1 {
								struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
								t = give_scope_struct($1);
								if(t==NULL || (t!=NULL && t->is_func!=1) )
								{	install_symbol($1, id, st, top,-1, return_type, temp, num_params, 0); if(strcmp(id,ret_type(id,$3)) != 0){printf("Type Mismatch in assignment at line: %d\n", line);}
								}
								else if(t!=NULL)
								{
									printf("There exists a function with same name at line : %d.\n", line);
								}
							}
	| DEC_ARR EQUAL L_BRACE EXPR0 R_BRACE {}
	| DEC_ARR {}
	| IDENTIFIER {
					struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
					t = give_scope_struct($1);
					if(t==NULL || (t!=NULL && t->is_func!=1))
						install_symbol($1, id, st, top,-1, return_type, temp, num_params, 0);
					else
						printf("There exists a function with same name at line : %d.\n", line);
				}
	;

// Consider cases for char/strings/struct


// Arrays
DEC_ARR
	: IDENTIFIER L_SQ_BRACE CONST_INT R_SQ_BRACE {install_symbol($1, id, st, top,$3, return_type, temp, num_params, 0);
																								if($3<=0)	{printf("Illegal size of array.\n"); yyerror(" ");}}
	;
ARR
	: IDENTIFIER L_SQ_BRACE CONST_INT R_SQ_BRACE {
	 char tempo[256];
	 strcpy(tempo,$1);
	 if(check_scope(tempo) == 0){
	 	printf("line %d : %s is out of scope\n",line,tempo);
	 }
	 else{
	 	if(get_arr_dim($1,st,top) > 0) {
			strcpy($$, get_datatype($1, st, top));
			if($3 < 0 || $3>=get_arr_dim($1, st, top)){
				printf("Index out of bounds at line %d\n",line);
			}
		}
		else{
			printf("Not an array at line %d\n",line);
		}
	 }
	}
	| IDENTIFIER L_SQ_BRACE EXPR0 R_SQ_BRACE {
			char tempo[256];
			strcpy(tempo,$1);

			if(check_scope(tempo) == 0){
				printf("line %d : %s is out of scope\n",line,tempo);
			}
			else{
				if(get_arr_dim($1,st,top) > 0) {
					strcpy($$, get_datatype($1, st, top));
				}
				else{
				printf("Not an array at line %d\n",line);
				}
			}
		}
	;

// Expressions
EXPR0
	: EXPR0 COMMA EXPR1 {strcpy($$,"int");}
	| EXPR1 {strcpy($$,$1);}
	;
EXPR1
	: LVAL EQUAL EXPR1 {printf("%s : %s\n",$1,$3);if(strcmp($1,$3) == 0 || strcmp(ret_type($1, $3), $1)==0) strcpy($$,$1); else {printf("Type mismatch at line %d\n",line);strcpy($$,$1);} }
	| LVAL PEQUAL EXPR1 {printf("%s : %s\n",$1,$3);if(strcmp($1,$3) == 0 || strcmp(ret_type($1, $3), $1)==0) strcpy($$,$1); else {printf("Type mismatch at line %d\n",line);strcpy($$,$1);}}
	| LVAL MEQUAL EXPR1 {printf("%s : %s\n",$1,$3);if(strcmp($1,$3) == 0 || strcmp(ret_type($1, $3), $1)==0) strcpy($$,$1); else {printf("Type mismatch at line %d\n",line);strcpy($$,$1);}}
	| LVAL SEQUAL EXPR1 {printf("%s : %s\n",$1,$3);if(strcmp($1,$3) == 0 || strcmp(ret_type($1, $3), $1)==0) strcpy($$,$1); else {printf("Type mismatch at line %d\n",line);strcpy($$,$1);}}
	| LVAL BEQUAL EXPR1 {printf("%s : %s\n",$1,$3);if(strcmp($1,$3) == 0 || strcmp(ret_type($1, $3), $1)==0) strcpy($$,$1); else {printf("Type mismatch at line %d\n",line);strcpy($$,$1);}}
	| EXPR1G {strcpy($$, $1);}
	;
EXPR1G
	: EXPR1G OR EXPR1F {strcpy($$,"int");}
	| EXPR1F {strcpy($$, $1);}
	;
EXPR1F
	: EXPR1F AND EXPR1E {strcpy($$,"int");}
	| EXPR1E {strcpy($$, $1);}
	;
EXPR1E
	: EXPR1E BOR EXPR1D {strcpy($$,"int");}
	| EXPR1D {strcpy($$, $1);}
	;
EXPR1D
	: EXPR1D CARROT EXPR1C {strcpy($$,"int");}
	| EXPR1C {strcpy($$, $1);}
	;
EXPR1C
	: EXPR1C BAND EXPR1B {strcpy($$,"int");}
	| EXPR1B {strcpy($$, $1);}
	;
EXPR1B
	: EXPR1B EQUALITY EXPR1A {strcpy($$,"int");}
	| EXPR1B NEQUAL EXPR1A {strcpy($$,"int");}
	| EXPR1A {strcpy($$, $1);}
	;
EXPR1A
	: EXPR1A GREAT EXPR2 {strcpy($$,"int");}
	| EXPR1A LESS EXPR2 {strcpy($$,"int");}
	| EXPR1A EGREAT EXPR2 {strcpy($$,"int");}
	| EXPR1A ELESS EXPR2 {strcpy($$,"int");}
	| EXPR2 {strcpy($$, $1);}
	;
EXPR2
	: EXPR2 PLUS EXPR3 {strcpy($$,ret_type($1,$3));}
	| EXPR2 MINUS EXPR3 {strcpy($$,ret_type($1,$3));}
	| EXPR3 {strcpy($$, $1);}
	;
EXPR3
	: EXPR3 MULTIPLY EXPR3A {strcpy($$,ret_type($1,$3));}
	| EXPR3 DIVIDE EXPR3A {strcpy($$,ret_type($1,$3));}
	| EXPR3A {strcpy($$, $1);}
	;
EXPR3A
	: INCR LVAL {strcpy($$, $2);}
	| DECR LVAL {strcpy($$, $2);}
	| PLUS EXPR4 {strcpy($$, $2);}
	| MINUS EXPR4 {strcpy($$, $2);}
	| BAND LVAL {strcpy($$, $2);}
	| FUNC_CALL {strcpy($$, $1);}
	| EXPR4 {strcpy($$, $1);}
	;
EXPR4
	: L_PAREN EXPR0 R_PAREN {strcpy($$, $2);}
	| LVAL INCR {strcpy($$, $1);}
	| LVAL DECR {strcpy($$, $1);}
	| NUM {strcpy($$, $1);}
	| LVAL {strcpy($$, $1);}
	| L_PAREN NUM_TYPE R_PAREN {strcpy($$, $2);}
	;

LVAL
	: IDENTIFIER {
		sprintf($$,"%s",get_datatype($1,st,top));
		if(get_arr_dim($1,st,top) == -1){
			if(strcmp("printf",$1)!=0){
				char tempo[256];
				strcpy(tempo,$1);
				//printf(" uhfriouwerhgiuwe %s\n",tempo);
				if(check_scope(tempo) == 0){
					printf("line %d : %s is out of scope\n",line,tempo);
				}
			}
		}
		else{
			printf("Array identifier cannot be used without subscript at line %d\n",line);
		}
	}
	| ARR {strcpy($$, $1);}
	| L_PAREN LVAL R_PAREN {strcpy($$, $2);}
	;

NUM
	: CONST_FLOAT {strcpy($$, "float");}
	| CONST_INT {strcpy($$, "int");}
	| CONST_CHAR {strcpy($$, "char");}
	;
NUM_TYPE
	: INT {strcpy(id, $1); strcpy($$, $1);}
	| FLOAT {strcpy(id, $1); strcpy($$, $1);}
	| SIGNED INT {strcpy(id, $2); strcpy($$, id);}
	| SIGNED FLOAT {strcpy(id, $2); strcpy($$, id);}
	| UNSIGNED INT {strcpy(id, $2); strcat(id, "_u");strcpy($$, id);}
	| UNSIGNED FLOAT {strcpy(id, $2); strcat(id, "_u");strcpy($$, id);}
	;


%%

void codegen(){

}
int ret_num(char *a){
	int ans;
	if(strcmp(a,"char") == 0) return 1;
	if(strcmp(a,"int") == 0) return 2;
	if(strcmp(a,"int_u") == 0) return 3;
	if(strcmp(a,"float") == 0) return 4;
	if(strcmp(a,"float_u") == 0) return 5;
}
char *ret_type(char *a,char *b){
    int a1 = ret_num(a);
    int a2 = ret_num(b);
    if(a1 > a2) return a;
    else return b;
}
int check_scope(char * msg){

	struct table_entry *temp = (struct table_entry *)malloc(sizeof(struct table_entry));
	temp = give_scope_struct(msg);

	if(temp == NULL){
		return 0;
	}
	int flag = 1;
	int iter = 0;

  int i,j;
  int flg1 = 0,flg2 = 0;

  for(i=0;i<=temp->num_of_scopes;++i){
    flg1 = 0;
    for(j=0;j<=temp->tp[i];++j){
      if(temp->st_state[i][j] != st[j]){
        flg1 = 1;
        break;
      }
    }
    if(flg1 == 0 && temp->tp[i] <= top){
      flg2 = 1;
      break;
    }
  }
  return flg2;
}
int main()
{

	FILE *fp;
	fp = fopen("sample.c", "r");
	yyin = fp;
	yyparse();
	if(flag!=1)
	{
		print_symbol_table();
		printf("\nParsing Successful\n");
	}
	return 0;
}

int yyerror(const char *s)
{
	flag=1;
	print_symbol_table();
	printf("\nParsing Unsuccessful: %s, at line number:%d.\n", s, line);
	return 0;
}
