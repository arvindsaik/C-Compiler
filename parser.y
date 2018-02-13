%token IDENTIFIER CONSTANT STRING_LITERAL INTEGER 
%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN VOLATILE VOID UNSIGNED UNION TYPEDEF 
%token STRUCT STATIC SIZEOF SIGNED SHORT REGISTER LONG INT FLOAT EXTERN ENUM DOUBLE CONST CHAR AUTO 
%token PTR_OP INC_OP DEC_OP LESS_OP GREAT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP NOT_OP XOR_OP MUL_OP DIV_OP ADD_OP SUB_OP MOD_OP
%token MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN EQ_ASSIGN
%token SUB_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN


%left '+' '-'
%left '*' '/'
%nonassoc UNARY


%{
	#include<stdio.h>
	#include "lib.h"
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
%}

%%

statement
	: compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| variable_declaration
	;		

iteration_statement
	: WHILE '(' expression ')' statement
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	;

expression_statement
	: ';'
	| assignment_statement ';'
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' variable_declaration '}'
	| '{' variable_declaration statement_list '}'
	;

assignment_statement 
	: IDENTIFIER EQ_ASSIGN expression
	| expression
	;

statement_list
	: statement
	| statement_list statement
	;


expression 
	: expression '+' INTEGER
	| expression '-' INTEGER
	| expression '*' INTEGER
	| expression '/' INTEGER	
	| unary expression %prec UNARY
	| '(' expression ')'
	| INTEGER
	;

unary
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

assigment_operators
	: '+'
	| MUL_ASSIGN	// *=
	| DIV_ASSIGN	// /=
	| MOD_ASSIGN	// %=
	| ADD_ASSIGN	// +=
	| SUB_ASSIGN	// -=
	;

variable_declaration
	: data_type IDENTIFIER 
	;

data_type
	: data_type
	| INT
	| VOID
	| FLOAT
	| CHAR
	| LONG
	| SHORT
	| SIGNED
	| UNSIGNED
	;



%%


int main()
{
	yyparse();
	return 0;
}

int yyerror(const char *s)
{
	return 1;
}
