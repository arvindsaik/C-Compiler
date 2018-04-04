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
		struct type_and_value{
			char dtype[20];
			char id_or_const[30];
		}pair;
		char lval[100];
		double val;
		char val2[100];
}
%token <lval> CHAR FLOAT VOID INT
%token <lval> IDENTIFIER
%token <val> CONST_FLOAT CONST_INT
%token <val2> CONST_CHAR CONST_STR
%type <pair> NUM_TYPE DEC2 DEC_ARR LVAL ARR
%type <pair> NUM EXPR0 EXPR1 EXPR1G EXPR1F EXPR1E EXPR1D EXPR1C EXPR1B EXPR1A EXPR2 EXPR3 EXPR3A EXPR4 FUNC_CALL
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

	char rnum[20] = "t0\0";
	struct idr_item{
		char idr_name[30];
	}idr_stack[20];
	int idr_stack_top = -1;


	
	char return_type[20];
	struct func_param temp[20];
	struct func_param func_call[20];
	int func_call_param = -1;
	int num_params = -1;
	FILE *f;

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
	: STATEMENT_BLOCK STATEMENT {}
	| STATEMENT {fprintf(f,"\n");} 
	;
STATEMENT
	: EXPR0 SEMICOLON {fprintf(f, ";");}
	| DEC0 SEMICOLON {fprintf(f, ";");}
	| IF_CONS
	| FOR_LOOP
	| WHILE_LOOP
	| DO_WHILE
	| L_BRACE STATEMENT_BLOCK R_BRACE
	| L_BRACE R_BRACE
	| RETURN EXPR1 SEMICOLON { 
		if(strcmp(return_type, $2.dtype)!=0){
			printf("Return type is not correct at line: %d.\n", line);
			fprintf(f, ";");
		}
	}
	| RETURN SEMICOLON {
		if(strcmp(return_type, "void")!=0){
			printf("Return type is not correct at line: %d.\n", line);
			fprintf(f, ";");
		}
	}
	| BREAK SEMICOLON { fprintf(f, ";"); }
	| SEMICOLON { fprintf(f, ";"); };

	// If construct
IF_CONS
	: IF L_PAREN EXPR0 R_PAREN STATEMENT {
		if(strcmp($3.dtype,"int") != 0){
			printf("expresion in if not of type int in line %d\n",line-1);
		}
	}
	| IF L_PAREN EXPR0 R_PAREN STATEMENT ELSE STATEMENT {
		if(strcmp($3.dtype,"int") != 0){
			printf("expresion in if not of type int in line %d\n",line-1);
		}
	}
	;

// While Loop
WHILE_LOOP
	: WHILE L_PAREN EXPR0 R_PAREN STATEMENT {
		if(strcmp($3.dtype,"int") != 0){
			printf("expresion in while not of type int in line %d\n",line);
		}
	}
	;

// Do-While
DO_WHILE
	: DO STATEMENT WHILE L_PAREN EXPR0 R_PAREN SEMICOLON {
		if(strcmp($5.dtype,"int") != 0){
			printf("expresion in do while not of type int in line %d\n",line);
		}
	}
	;

// Function Declarations/Definitions
FUNC_DEC
	: CHAR IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN {
		strcpy(return_type, $1);
		struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
		t = give_scope_struct($2);
		if(t==NULL){
			install_symbol($2,id, st, top,-1, return_type, 	temp, num_params,1);
		}
		else
			printf("Invalid function name %s: at line number %d.\n", $2, line);
		num_params=-1;
	}
	| NUM_TYPE IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN {
		strcpy(return_type, $1.dtype);
		struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
		t = give_scope_struct($2);
		if(t==NULL)
		{
			install_symbol($2, $1.dtype, st, top, -1, return_type, temp, num_params, 1);
		}
		else
			printf("Invalid function name %s: at line number %d.\n", $2, line);
		num_params=-1;
	}
	| VOID IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN {
		strcpy(return_type, $1);
		struct table_entry *t = (struct table_entry *)malloc(sizeof(struct table_entry));
		t = give_scope_struct($2);
		if(t==NULL){
			install_symbol($2,id, st, top,-1, return_type, 	temp, num_params,1);
		}
		else
			printf("Invalid function name %s: at line number %d.\n", $2, line);
		num_params=-1;
	}
	;
FUNC_DEF
	: FUNC_DEC L_BRACE STATEMENT_BLOCK R_BRACE	{}
	;
FUNC_PARAMS
	: FUNC_PARAMS1
	|
	;
FUNC_PARAMS1
	: NUM_TYPE IDENTIFIER COMMA FUNC_PARAMS1 {
		strcpy(temp[++num_params].datatype, $1.dtype);
		st[++top] = brack_num+1;
		install_symbol($2, $1.dtype, st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
	| CHAR IDENTIFIER COMMA FUNC_PARAMS1 {
		strcpy(temp[++num_params].datatype, "void");
		st[++top] = brack_num+1;strcpy(id, $1);
		install_symbol($2,$1, st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}

	| NUM_TYPE IDENTIFIER {
		strcpy(temp[++num_params].datatype, $1.dtype);
		st[++top] = brack_num+1;
		install_symbol($2, $1.dtype, st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
	| CHAR IDENTIFIER {
		strcpy(temp[++num_params].datatype, "char");
		strcpy(id, $1); st[++top] = brack_num+1;
		install_symbol($2, $1, st, top,-1, return_type, temp, num_params, 0);	
		top--;
	}
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
			strcpy($$.dtype, temp->return_type);

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
			strcpy($$.dtype, temp->return_type);
	}
	;
FUNC_LIST
	: EXPR1	{
		strcpy(func_call[++func_call_param].datatype, $1.dtype);
	}
	| CONST_STR {
		strcpy(func_call[++func_call_param].datatype, "char*");
	}
	| EXPR1 COMMA FUNC_LIST	{
		strcpy(func_call[++func_call_param].datatype, $1.dtype);
	}
	| CONST_CHAR COMMA FUNC_LIST {
		strcpy(func_call[++func_call_param].datatype, "char");
	}
	| CONST_STR COMMA FUNC_LIST {
		strcpy(func_call[++func_call_param].datatype, "char*");
	}
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
		{	install_symbol($1, id, st, top,-1, return_type, temp, num_params, 0); if(strcmp(id,ret_type(id,$3.dtype)) != 0){printf("Type Mismatch in assignment at line: %d\n", line);}
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
	: IDENTIFIER L_SQ_BRACE CONST_INT R_SQ_BRACE {
		install_symbol($1, id, st, top,$3, return_type, temp, num_params, 0);
		if($3<=0){
			printf("Illegal size of array.\n"); 
			yyerror(" ");
		}
	}
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
			strcpy($$.dtype, get_datatype($1, st, top));
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
					strcpy($$.dtype, get_datatype($1, st, top));
				}
				else{
				printf("Not an array at line %d\n",line);
				}
			}
		}
	;

// Expressions
EXPR0
	: EXPR0 COMMA EXPR1 {
		strcpy($$.dtype,"int");
	}
	| EXPR1 {
		strcpy($$.dtype,$1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	;
EXPR1
	: LVAL EQUAL EXPR1 {
		if(strcmp($1.dtype,$3.dtype) == 0 || strcmp(ret_type($1.dtype, $3.dtype), $1.dtype)==0) {
			strcpy($$.dtype,$1.dtype); 
			strcpy($$.id_or_const,rnum);
			fprintf(f, "%s = %s\n", $1.id_or_const, $3.id_or_const);
			rnum[1]++; 
			rnum[1] = '0';
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy($$.dtype,$1.dtype);
		} 
	}
	| LVAL PEQUAL EXPR1 {
		if(strcmp($1.dtype,$3.dtype) == 0 || strcmp(ret_type($1.dtype, $3.dtype), $1.dtype)==0) {
			strcpy($$.dtype,$1.dtype); 
			strcpy($$.id_or_const,rnum);
			printf( "%s = %s\n", $1.id_or_const, $3.id_or_const);
			rnum[1]++;
			rnum[1] = '0';
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy($$.dtype,$1.dtype);
		}
	}
	| LVAL MEQUAL EXPR1 {
		if(strcmp($1.dtype,$3.dtype) == 0 || strcmp(ret_type($1.dtype, $3.dtype), $1.dtype)==0) {
			strcpy($$.dtype,$1.dtype); 
			strcpy($$.id_or_const,rnum);
			printf("%s = %s\n", $1.id_or_const, $3.id_or_const);
			rnum[1]++; 
			rnum[1] = '0';
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy($$.dtype,$1.dtype);
		}
	}
	| LVAL SEQUAL EXPR1 {
		if(strcmp($1.dtype,$3.dtype) == 0 || strcmp(ret_type($1.dtype, $3.dtype), $1.dtype)==0) {
			strcpy($$.dtype,$1.dtype); 
			strcpy($$.id_or_const,rnum);
			printf( "%s = %s\n", $1.id_or_const, $3.id_or_const);
			rnum[1]++; 
			rnum[1] = '0';
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy($$.dtype,$1.dtype);
		}
	}
	| LVAL BEQUAL EXPR1 {
		if(strcmp($1.dtype,$3.dtype) == 0 || strcmp(ret_type($1.dtype, $3.dtype), $1.dtype)==0) {
			strcpy($$.dtype,$1.dtype); 
			strcpy($$.id_or_const,rnum);
			printf( "%s = %s\n", $1.id_or_const, $3.id_or_const);
			rnum[1]++; 
			rnum[1] = '0';
		} 
		else {
			printf("Type mismatch at line %d\n",line);
			strcpy($$.dtype,$1.dtype);
		}
	}
	| EXPR1G {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
		rnum[1] = '0';
	}
	;
EXPR1G
	: EXPR1G OR EXPR1F {
		strcpy($$.dtype,"int");
		strcpy($$.id_or_const,rnum);
		printf("%s = %s || %s\n",rnum,$1.id_or_const,$3.id_or_const);
		rnum[1]++;
	}
	| EXPR1F {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	;
EXPR1F
	: EXPR1F AND EXPR1E {
		strcpy($$.dtype,"int");
		strcpy($$.id_or_const,rnum);
		printf("%s = %s && %s\n",rnum,$1.id_or_const,$3.id_or_const);
		rnum[1]++;
	}
	| EXPR1E {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	
	}
	;
EXPR1E
	: EXPR1E BOR EXPR1D {
		strcpy($$.dtype,"int");
		strcpy($$.id_or_const,rnum);
		printf("%s = %s | %s\n",rnum,$1.id_or_const,$3.id_or_const);
		rnum[1]++;
	}
	| EXPR1D {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	;
EXPR1D
	: EXPR1D CARROT EXPR1C {
		strcpy($$.dtype,"int");
		strcpy($$.id_or_const,rnum);
		printf( "%s = %s ^ %s\n", rnum, $1.id_or_const, $3.id_or_const);
		rnum[1]++;
	}
	| EXPR1C {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	;
EXPR1C
	: EXPR1C BAND EXPR1B {
		strcpy($$.dtype,"int");
		strcpy($$.id_or_const,rnum);
		printf( "%s = %s & %s\n", rnum, $1.id_or_const, $3.id_or_const);
		rnum[1]++;
	}
	| EXPR1B {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	;
EXPR1B
	: EXPR1B EQUALITY EXPR1A {
		strcpy($$.dtype,"int");
		strcpy($$.id_or_const,rnum);
		printf( "%s = %s == %s\n", rnum, $1.id_or_const, $3.id_or_const);
		rnum[1]++;
	}
	| EXPR1B NEQUAL EXPR1A {
		strcpy($$.dtype,"int");
		strcpy($$.id_or_const,rnum);
		printf( "%s = %s != %s\n", rnum, $1.id_or_const, $3.id_or_const);
		rnum[1]++;
	}
	| EXPR1A {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	;
EXPR1A
	: EXPR1A GREAT EXPR2 {
		strcpy($$.dtype,"int");
		strcpy($$.id_or_const,rnum);
		printf( "%s = %s > %s\n", rnum, $1.id_or_const, $3.id_or_const);
		rnum[1]++;
	}
	| EXPR1A LESS EXPR2 {
		strcpy($$.dtype,"int");
		strcpy($$.id_or_const,rnum);
		printf( "%s = %s < %s\n", rnum, $1.id_or_const, $3.id_or_const);
		rnum[1]++;
	}
	| EXPR1A EGREAT EXPR2 {
		strcpy($$.dtype,"int");
		strcpy($$.id_or_const,rnum);
		printf( "%s = %s >= %s\n", rnum, $1.id_or_const, $3.id_or_const);
		rnum[1]++;
	}
	| EXPR1A ELESS EXPR2 {
		strcpy($$.dtype,"int");strcpy($$.id_or_const,rnum);
		printf( "%s = %s <= %s\n", rnum, $1.id_or_const, $3.id_or_const);
		rnum[1]++;
	}
	| EXPR2 {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	;
EXPR2
	: EXPR2 PLUS EXPR3 {
		strcpy($$.dtype,ret_type($1.dtype,$3.dtype));
		strcpy($$.id_or_const,rnum);
		printf( "%s = %s + %s\n", rnum, $1.id_or_const, $3.id_or_const);
		rnum[1]++;
	}
	| EXPR2 MINUS EXPR3 {
		strcpy($$.dtype,ret_type($1.dtype,$3.dtype));
		strcpy($$.id_or_const,rnum);
		printf( "%s = %s - %s\n",rnum,$1.id_or_const,$3.id_or_const);
		rnum[1]++;
	}
	| EXPR3 {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	;
EXPR3
	: EXPR3 MULTIPLY EXPR3A {
		strcpy($$.dtype,ret_type($1.dtype,$3.dtype));
		strcpy($$.id_or_const,rnum);
		printf( "%s = %s * %s\n",rnum,$1.id_or_const,$3.id_or_const);
		rnum[1]++;
	}
	| EXPR3 DIVIDE EXPR3A {
		strcpy($$.dtype,ret_type($1.dtype,$3.dtype));
		strcpy($$.id_or_const,rnum);
		printf( "%s = %s / %s\n", rnum, $1.id_or_const, $3.id_or_const);
		rnum[1]++;
	}
	| EXPR3A {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	;
EXPR3A
	: INCR LVAL {
		strcpy($$.dtype, $2.dtype);
		strcpy($$.id_or_const,$2.id_or_const);
	}
	| DECR LVAL {
		strcpy($$.dtype, $2.dtype);
		strcpy($$.id_or_const,$2.id_or_const);
	}
	| PLUS EXPR4 {
		strcpy($$.dtype, $2.dtype);
		strcpy($$.id_or_const,$2.id_or_const);
	}
	| MINUS EXPR4 {
		strcpy($$.dtype, $2.dtype);
		strcpy($$.id_or_const,$2.id_or_const);
	}
	| BAND LVAL {
		strcpy($$.dtype, $2.dtype);
		strcpy($$.id_or_const,$2.id_or_const);
	}
	| FUNC_CALL {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	| EXPR4 {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	;
EXPR4
	: L_PAREN EXPR0 R_PAREN {
		strcpy($$.dtype, $2.dtype);
		strcpy($$.id_or_const,$2.id_or_const);
	}
	| LVAL INCR {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	| LVAL DECR {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	| NUM {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	| LVAL {
		strcpy($$.dtype, $1.dtype);
		strcpy($$.id_or_const,$1.id_or_const);
	}
	| L_PAREN NUM_TYPE R_PAREN {
		strcpy($$.dtype, $2.dtype);
		strcpy($$.id_or_const,$2.id_or_const);
	}
	;

LVAL
	: IDENTIFIER {
		sprintf($$.dtype,"%s",get_datatype($1,st,top));
		if(get_arr_dim($1,st,top) == -1){
			if(strcmp("printf",$1)!=0){
				char tempo[256];
				strcpy(tempo,$1);
				if(check_scope(tempo) == 0){
					printf("line %d : %s is out of scope\n",line,tempo);
				}
			}
			char temp[20];
			sprintf(temp, "%s", $1);
			// printf("%s\n",temp);
			sprintf($$.id_or_const, "%s", $1);
		}
		else{
			printf("Array identifier cannot be used without subscript at line %d\n",line);
		}
	}
	| ARR {
		strcpy($$.dtype, $1.dtype);
	}
	| L_PAREN LVAL R_PAREN {
		strcpy($$.dtype, $2.dtype);
	}
	;

NUM
	: CONST_FLOAT {
		strcpy($$.dtype, "float"); 
		sprintf($$.id_or_const,"%f",$1) ;
		char temp[20]; 
	}
	| CONST_INT {
		strcpy($$.dtype, "int"); 
		sprintf($$.id_or_const,"%.0f",$1) ;
		char temp[20]; 
	}
	| CONST_CHAR {
		strcpy($$.dtype, "char"); 
		sprintf($$.id_or_const,"%s",$1) ;
		char temp[20]; 
	}
	;
NUM_TYPE
	: INT {
		strcpy(id, $1); 
		strcpy($$.dtype, $1);
	}
	| FLOAT {
		strcpy(id, $1); 
		strcpy($$.dtype, $1);
	}
	| SIGNED INT {
		strcpy(id, $2); 
		strcpy($$.dtype, id);
	}
	| SIGNED FLOAT {
		strcpy(id, $2); 
		strcpy($$.dtype, id);
	}
	| UNSIGNED INT {
		strcpy(id, $2); 
		strcat(id, "_u");
		strcpy($$.dtype, id);
	}
	| UNSIGNED FLOAT {
		strcpy(id, $2); 
		strcat(id, "_u");
		strcpy($$.dtype, id);
	}
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
    if(flg1 == 0 && temp->tp[i] <= top){
      flg2 = 1;
      break;
    }
  }
  return flg2;
}
// void add_idr_stack(char name[]){
// 	strcpy(idr_stack[++idr_stack_top].name,name);
// }
int main()
{

	FILE *fp;
	fp = fopen("sample.c", "r");
	f = fopen("ICG.txt", "w");
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
