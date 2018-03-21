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
%expect 4
%union {
		char lval[100];
		double val;
		char val2[100];
}
%token <lval> CHAR FLOAT VOID INT
%token <lval> IDENTIFIER
%token <val> CONST_FLOAT CONST_INT
%token <val2> CONST_CHAR CONST_STR
%type <lval> NUM_TYPE DEC2 DEC4 DEC_ARR LVAL ARR
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
	char *ret_type(char *a,char *b);
	int ret_num(char *a);
	int st[1000];
  	int brack_num = 0;
  	int top = -1;
	char id[100];
	int flag = 0;

	char return_type[20];
	struct func_param temp[20];
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
	| RETURN EXPR0 SEMICOLON
	| BREAK SEMICOLON
	| SEMICOLON
	;

// If construct
IF_CONS
	: IF L_PAREN EXPR0 R_PAREN STATEMENT
	| IF L_PAREN EXPR0 R_PAREN STATEMENT ELSE STATEMENT
	;

// While Loop
WHILE_LOOP
	: WHILE L_PAREN EXPR0 R_PAREN STATEMENT
	;

// Do-While
DO_WHILE
	: DO STATEMENT WHILE L_PAREN EXPR0 R_PAREN SEMICOLON
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
																								install_symbol($2,id, st, top,-1, return_type, 	temp, num_params,1); num_params=-1;}
	| NUM_TYPE IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN {strcpy(return_type, $1);
																										install_symbol($2,id, st, top,-1, return_type, 	temp, num_params, 1);	num_params=-1;}
	| VOID IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN {strcpy(return_type, $1);
																								install_symbol($2,id, st, top,-1, return_type, 	temp, num_params, 1);	num_params=-1;}
	;
FUNC_DEF
	: FUNC_DEC L_BRACE STATEMENT_BLOCK R_BRACE	{}
	;
FUNC_PARAMS
	: FUNC_PARAMS1
	|
	;
FUNC_PARAMS1
	: VOID IDENTIFIER COMMA FUNC_PARAMS1 {strcpy(temp[++num_params].datatype, "void");
																st[++top] = brack_num+1;install_symbol($2, id, st, top,-1, return_type, temp, num_params, 0);	top--; }
	| NUM_TYPE IDENTIFIER COMMA FUNC_PARAMS1 {strcpy(temp[++num_params].datatype, id);
																st[++top] = brack_num+1;install_symbol($2, id, st, top,-1, return_type, temp, num_params, 0);	top--;}
	| CHAR IDENTIFIER COMMA FUNC_PARAMS1 {strcpy(temp[++num_params].datatype, "void");
																st[++top] = brack_num+1;strcpy(id, $1);install_symbol($2,id, st, top,-1, return_type, temp, num_params, 0);	top--;}
	| VOID IDENTIFIER {strcpy(temp[++num_params].datatype, "void");
										strcpy(id, $1); st[++top] = brack_num+1;install_symbol($2, id, st, top,-1, return_type, temp, num_params, 0);	top--;}
	| NUM_TYPE IDENTIFIER {strcpy(temp[++num_params].datatype, id);
												st[++top] = brack_num+1;install_symbol($2, id, st, top,-1, return_type, temp, num_params, 0);	top--;}
	| CHAR IDENTIFIER {strcpy(temp[++num_params].datatype, "char");
											strcpy(id, $1); st[++top] = brack_num+1;install_symbol($2, id, st, top,-1, return_type, temp, num_params, 0);	top--;}
	;
FUNC_CALL
	: IDENTIFIER L_PAREN FUNC_LIST R_PAREN
	| IDENTIFIER L_PAREN R_PAREN
	;
FUNC_LIST
	: EXPR0
	| CONST_CHAR {}
	| CONST_STR {}
	| FUNC_LIST COMMA EXPR0
	| FUNC_LIST COMMA CONST_CHAR {}
	| FUNC_LIST COMMA CONST_STR {}
	;

// Variable Declarations
DEC0
	: NUM_TYPE DEC1
	| CHR_TYPE DEC3
	;
CHR_TYPE
	: CHAR {strcpy(id, $1);} // added so that char comes in type in symbol table
DEC1
	: DEC1 COMMA DEC2
	| DEC2
	;
DEC2
	: IDENTIFIER EQUAL EXPR1 {install_symbol($1, id, st, top,-1, return_type, temp, num_params, 0);}
	| DEC_ARR EQUAL L_BRACE EXPR0 R_BRACE {}
	| DEC_ARR {}
	| IDENTIFIER {install_symbol($1, id, st, top,-1, return_type, temp, num_params, 0);}
	;

// Consider cases for char/strings/struct
DEC3
	: DEC3 COMMA DEC4
	| DEC4
	;
DEC4
	: IDENTIFIER EQUAL CONST_CHAR {install_symbol($1, id, st, top,-1, return_type, temp, num_params, 0);}
	| IDENTIFIER EQUAL CONST_INT {install_symbol($1, id, st, top,-1, return_type, temp, num_params, 0);}
	| DEC_ARR EQUAL CONST_STR {}
	| DEC_ARR {}
	| IDENTIFIER {install_symbol($1, id, st, top,-1, return_type, temp, num_params, 0);}
	;

// Arrays
DEC_ARR
	: IDENTIFIER L_SQ_BRACE CONST_INT R_SQ_BRACE { strcat(id,"_array");install_symbol($1, id, st, top,$3, return_type, temp, num_params, 0);}
	;
ARR
	: IDENTIFIER L_SQ_BRACE EXPR0 R_SQ_BRACE {strcpy($$, $1); }
	;

// Expressions
EXPR0
	: EXPR0 COMMA EXPR1 {}
	| EXPR1 {strcpy($$,$1);}
	;
EXPR1
	: LVAL EQUAL EXPR1 {if(strcmp($1,$3) == 0) strcpy($$,$1); else {printf("Type mismatch\n");yyerror(" ");strcpy($$,"char");}}
	| LVAL PEQUAL EXPR1 {if(strcmp($1,$3) == 0) strcpy($$,$1); else {printf("Type mismatch\n");yyerror(" ");strcpy($$,"char");}}
	| LVAL MEQUAL EXPR1 {if(strcmp($1,$3) == 0) strcpy($$,$1); else {printf("Type mismatch\n");yyerror(" ");strcpy($$,"char");}}
	| LVAL SEQUAL EXPR1 {if(strcmp($1,$3) == 0) strcpy($$,$1); else {printf("Type mismatch\n");yyerror(" ");strcpy($$,"char");}}
	| LVAL BEQUAL EXPR1 {if(strcmp($1,$3) == 0) strcpy($$,$1); else {printf("Type mismatch\n");yyerror(" ");strcpy($$,"char");}}
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
	: IDENTIFIER {sprintf($$,"%s",get_datatype($1,st,top));if(strcmp("printf",$1)!=0){char tempo[256]; strcpy(tempo,$1);if(check_scope(tempo) == 0){printf("line %d : %s is out of scope\n",line,tempo);yyerror(" ");}}}
	| ARR {strcpy($$, $1);}
	| L_PAREN LVAL R_PAREN {strcpy($$, $2);}
	;

NUM
	: CONST_FLOAT {strcpy($$, "float");}
	| CONST_INT {strcpy($$, "int");}
	;
NUM_TYPE
	: INT {strcpy(id, $1);}
	| FLOAT {strcpy(id, $1);}
	| SIGNED INT {strcpy(id, $2);}
	| SIGNED FLOAT {strcpy(id, $2);}
	| UNSIGNED INT {strcpy(id, $2); strcat(id, "_u");}
	| UNSIGNED FLOAT {strcpy(id, $2); strcat(id, "_u");}
	;


%%
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
    if(flg1 == 0){
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
	// print_symbol_table();
	printf("\nParsing Unsuccessful: %s, at line number:%d.\n", s, line);
	return 0;
}
