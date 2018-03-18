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
%union {
		char lval[100];
		double val;
		char val2[100];
}
%token <lval> CHAR FLOAT VOID INT 
%token <lval> IDENTIFIER
%token <val> CONST_FLOAT CONST_INT
%token <val2> CONST_CHAR CONST_STR
%type <lval> NUM_TYPE DEC2 DEC4 DEC_ARR LVAL POINTER ARR
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
	int st[1000];
  	int brack_num = 0;
  	int top = -1;
	char id[100];
	int flag = 0;
%}
%%
// Start symbol, everything allowed outside main
START
	: START DEC0 SEMICOLON
	| START FUNC_DEC SEMICOLON
	| START FUNC_DEF
	| SEMICOLON
	| %empty
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
	| %empty
	;


// Function Declarations/Definitions
FUNC_DEC
	: POINTER_TYPE IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN
	| CHAR IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN {strcpy(id, $1);}
	| NUM_TYPE IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN {strcpy(id, $1);}
	| VOID IDENTIFIER L_PAREN FUNC_PARAMS R_PAREN {strcpy(id, $1);}
	;
FUNC_DEF
	: FUNC_DEC L_BRACE STATEMENT_BLOCK R_BRACE
	;
FUNC_PARAMS
	: FUNC_PARAMS1
	| %empty
	;
FUNC_PARAMS1
	: POINTER_TYPE IDENTIFIER COMMA FUNC_PARAMS1
	| VOID IDENTIFIER COMMA FUNC_PARAMS1
	| NUM_TYPE IDENTIFIER COMMA FUNC_PARAMS1
	| CHAR IDENTIFIER COMMA FUNC_PARAMS1 {strcpy(id, $1);}
	| POINTER_TYPE IDENTIFIER
	| VOID IDENTIFIER {strcpy(id, $1);}
	| NUM_TYPE IDENTIFIER {strcpy(id, $1);}
	| CHAR IDENTIFIER {strcpy(id, $1);}
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
	| CHAR DEC3 {strcpy(id, $1);}
	;
DEC1
	: DEC1 COMMA DEC2
	| DEC2
	;
DEC2
	: IDENTIFIER EQUAL EXPR1 {install_symbol($1, id, st, top);}
	| DEC_ARR EQUAL L_BRACE EXPR0 R_BRACE {char temp[100]; strcpy(temp, id); strcat(temp, "_arr"); install_symbol($1, id, st, top);}
	| POINTER {install_symbol($1, id, st, top);}
	| DEC_ARR {install_symbol($1, id, st, top);}
	| IDENTIFIER {install_symbol($1, id, st, top);}
	;

// Consider cases for char/strings/struct
DEC3
	: DEC3 COMMA DEC4
	| DEC4
	;
DEC4
	: IDENTIFIER EQUAL CONST_CHAR {install_symbol($1, id, st, top);}
	| DEC_ARR EQUAL CONST_STR {char temp[100]; strcpy(temp, id); strcat(temp, "_arr"); install_symbol($1, id, st, top);}
	| DEC_ARR {char temp[100]; strcpy(temp, id); strcat(temp, "_arr"); install_symbol($1, id, st, top);}
	| IDENTIFIER {install_symbol($1, id, st, top);}
	;

// Arrays
DEC_ARR
	: IDENTIFIER L_SQ_BRACE CONST_INT R_SQ_BRACE {}
	;
ARR
	: IDENTIFIER L_SQ_BRACE EXPR0 R_SQ_BRACE {strcpy($$, $1);}
	;

// Expressions
EXPR0
	: EXPR0 COMMA EXPR1
	| EXPR1
	;
EXPR1
	: LVAL EQUAL EXPR1
	| LVAL PEQUAL EXPR1
	| LVAL MEQUAL EXPR1
	| LVAL SEQUAL EXPR1
	| LVAL BEQUAL EXPR1
	| EXPR1G
	;
EXPR1G
	: EXPR1G OR EXPR1G
	| EXPR1F
	;
EXPR1F
	: EXPR1F AND EXPR1E
	| EXPR1E
	;
EXPR1E
	: EXPR1E BOR EXPR1D
	| EXPR1D
	;
EXPR1D
	: EXPR1D CARROT EXPR1C
	| EXPR1C
	;
EXPR1C
	: EXPR1C BAND EXPR1B
	| EXPR1B
	;
EXPR1B
	: EXPR1B EQUALITY EXPR1A
	| EXPR1B NEQUAL EXPR1A
	| EXPR1A
	;
EXPR1A
	: EXPR1A GREAT EXPR2
	| EXPR1A LESS EXPR2
	| EXPR1A EGREAT EXPR2
	| EXPR1A ELESS EXPR2
	| EXPR2
	;
EXPR2
	: EXPR2 PLUS EXPR3
	| EXPR2 MINUS EXPR3
	| EXPR3
	;
EXPR3
	: EXPR3 MULTIPLY EXPR3A
	| EXPR3 DIVIDE EXPR3A
	| EXPR3A
	;
EXPR3A
	: INCR LVAL
	| DECR LVAL
	| PLUS EXPR4
	| MINUS EXPR4
	| BAND LVAL
	| FUNC_CALL
	| EXPR4
	;
EXPR4
	: L_PAREN EXPR0 R_PAREN
	| LVAL INCR
	| LVAL DECR
	| NUM
	| LVAL
	| L_PAREN NUM_TYPE R_PAREN
	;

LVAL
	: POINTER {strcpy($$, $1);}
	| IDENTIFIER {strcpy($$, $1);if(strcmp("printf",$1)!=0){char tempo[256]; strcpy(tempo,$1);if(check_scope(tempo) == 0){printf("line %d : %s is out of scope\n",line,tempo);yyerror(" - ");}}} 
	| ARR {strcpy($$, $1);}
	| L_PAREN LVAL R_PAREN {strcpy($$, $2);}
	;
  
POINTER
	: MULTIPLY LVAL {strcpy($$, $2); strcat(id, "_ptr");}
	;
NUM
	: CONST_FLOAT {}
	| CONST_INT {}
	;
NUM_TYPE
	: INT {strcpy(id, $1);}
	| FLOAT {strcpy(id, $1);}
	| SIGNED INT {strcpy(id, $2);}
	| SIGNED FLOAT {strcpy(id, $2);}
	| UNSIGNED INT {strcpy(id, $2); strcat(id, "_u");}
	| UNSIGNED FLOAT {strcpy(id, $2); strcat(id, "_u");}
	;
POINTER_TYPE
	: NUM_TYPE MULTIPLY
	| VOID MULTIPLY
	| CHAR MULTIPLY
	| POINTER_TYPE MULTIPLY
	;

%%
int check_scope(char * msg){
	int * scp = malloc(sizeof(int)*1000);
	scp = give_scope_array(msg);
	int scp_no = give_scope_size(msg);
	if(scp_no == -2){
		return 0;
	}
	int flag = 1;
	int iter = 0;
	for(iter = 0;iter <= scp_no;++iter){
		if(scp[iter] != st[iter]){
			flag = 0;
			break;
		}
	}
	return flag;
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
  	// print_constant_table();
	printf("\nParsing Successful\n");
	}
	return 0;
}

int yyerror(const char *s)
{
	flag=1;
	printf("\nParsing Unsuccessful: %s, at line number:%d.\n", s, line);
	exit(0);

}
