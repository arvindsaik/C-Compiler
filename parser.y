%union{
double val;
char lval[100];
}
%nonassoc UNARY
%nonassoc NO_ELSE
%nonassoc ELSE

%left '<' '>' '=' GE_OP LE_OP EQ_OP NE_OP
%left  '+'  '-'
%left  '*'  '/' '%'
%left  '|'
%left  '&'

%token IF ELSE WHILE FOR CONTINUE BREAK RETURN 
%token SIZEOF    
%token INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP NOT_OP XOR_OP MUL_OP DIV_OP ADD_OP SUB_OP MOD_OP 
%token MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN DEF
%token SUB_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN

%token <lval> INT FLOAT CHAR UNSIGNED SIGNED VOID LONG SHORT
%token <lval> IDENTIFIER
%token <val> CONST_INT CONST_FLOAT
%token <lval> STRING_LITERAL CONST_CHAR
%type <lval> data_type declaration_specifiers

%start start_state


%{
	#include<stdio.h>
	#include<string.h>
	#include "lib.h"  
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	char type[20], temp[20];
	char token[100];
	FILE *yyin;
%}

%%

start_state
	: global_declaration
	| start_state global_declaration
	;

statement
	: compound_statement
	| expression_statement
	| iteration_statement
	| jump_statement
	| selection_statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement %prec NO_ELSE
	| IF '(' expression ')' statement ELSE statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

global_declaration
	: function_definition
	| declaration
	;

primary_expression
	: IDENTIFIER
	| CONST_FLOAT	{char a[100]; sprintf(a, "%f", (float)$1); install_constant(a, "FP_CONST");}
	| CONST_INT		{char a[100]; sprintf(a, "%d", (int)$1); install_constant(a, "INT_CONST");}
	| CONST_CHAR	{install_constant($1, "CHAR_CONST");}
	| STRING_LITERAL	{install_constant($1, "STR_CONST");}
	| '(' expression ')'
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers init_declarator_list ';' 
	| error
	;

declaration_specifiers
	: data_type declaration_specifiers	{ strcpy(temp, $1); strcat(temp, " "); strcat(temp, type); strcpy(type, temp); }
	| data_type	{ strcpy(type, $1); }
	;

data_type
	: VOID {strcpy($$, "void");}
	| CHAR {strcpy($$, "char");}
	| SHORT {strcpy($$, "short");}
	| INT {strcpy($$, "int");}
	| LONG {strcpy($$, "long");}
	| FLOAT {strcpy($$, "float");}
	| SIGNED {strcpy($$, "signed");}
	| UNSIGNED {strcpy($$, "unsigned");}
	;

init_declarator_list
	: init_declarator	
	| init_declarator_list ',' init_declarator 
	;

init_declarator
	: declarator					{}
	| declarator '=' initializer	{}
	;

specifier_qualifier_list
	: declaration_specifiers specifier_qualifier_list
	| declaration_specifiers
	;

declarator
	: IDENTIFIER	{strcpy(token, $1); install_symbol(token, type);}
	| '(' declarator ')'
	| declarator '[' constant_expression ']'
	| declarator '[' ']'
	| declarator '(' parameter_type_list ')'
	| declarator '(' identifier_list ')'
	| declarator '(' ')'
	;

parameter_type_list
	: parameter_list
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

%%


int main()
{
	FILE *fp;
	fp = fopen("sample.c", "r");
	yyin = fp; 
	yyparse();
	print_symbol_table();
  	print_constant_table();
	return 0;
}

int yyerror(const char *s)
{
	printf("\nParsing Unsuccessful: %s", s);
	return 1;
}
