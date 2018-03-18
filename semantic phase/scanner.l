%{
	#define CHECK if(com_top == 0)
	#include "y.tab.h"
	#include <string.h>
	#include <stdio.h>
	#include <stdlib.h>
	#define SIZE 100
	extern int line;
	int com_top=0;
	int com[SIZE]={0};
	extern int st[1000];
	extern int brack_num;
	extern int top;
%}
operators [\+\-\*\/]
identifier [a-zA-Z_][a-zA-Z0-9_]*
%%
"//".* ;
"/*" com[com_top++]=line;
#.* ;
\n {
	++line;
}
"=" CHECK return EQUAL;
"{" {
	CHECK
	{
		//depth[depth_top++]=line;
    brack_num++;st[++top] = brack_num;
		return L_BRACE;
	}
}
"}" {
	CHECK
	{
		//if(depth_top==0)
		//	printf("\033[31m Error in line %d, '}' found with no matching '{'\n \033[0m", line);
		//else
		//{
		//	--depth_top;
      --top;
			return R_BRACE;
		//}
	}
}
"*/" {
	if(com_top==0)
		printf("\033[31m Error in line %d, '*/' found with no matching '/*'\n \033[0m", line);
	else
		--com_top;
}
[ \t]+ ;
"do" CHECK return DO;
"while"  CHECK return WHILE;
"for" CHECK return FOR;
"if" CHECK return IF;
"else" CHECK return ELSE;
"case" CHECK return CASE;
"default" CHECK return DEFAULT;
"unsigned" CHECK return UNSIGNED;
"signed" CHECK return SIGNED;
"return" CHECK return RETURN;
"break" CHECK return BREAK;
"char" {CHECK {strcpy(yylval.lval, yytext); return CHAR;}}
"float" {CHECK {strcpy(yylval.lval, yytext); return FLOAT;}}
"void" {CHECK {strcpy(yylval.lval, yytext); return VOID;}}
"int" {CHECK {strcpy(yylval.lval, yytext); return INT;}}

"." {CHECK return DOT;}
"+" {CHECK return PLUS;}
"-" {CHECK return MINUS;}
"*" {CHECK return MULTIPLY;}
"/" {CHECK return DIVIDE;}
"%" {CHECK return MOD;}
"^" {CHECK return CARROT;}

"++" {CHECK return INCR;}
"--" {CHECK return DECR;}
"+=" {CHECK return PEQUAL;}
"-=" {CHECK return MEQUAL;}
"*=" {CHECK return SEQUAL;}
"/=" {CHECK return BEQUAL;}

"==" {CHECK return EQUALITY;}
">" {CHECK return GREAT;}
"<" {CHECK return  LESS;}
">=" {CHECK return EGREAT;}
"<=" {CHECK return ELESS;}
"!=" {CHECK return NEQUAL;}

"!" {CHECK return NOT;}
"||" {CHECK return OR;}
"&&" {CHECK return AND;}
"~" {CHECK return BNOT;}
"|" {CHECK return BOR;}
"&" {CHECK return BAND;}


"[" CHECK return L_SQ_BRACE;
"]" CHECK return R_SQ_BRACE;
"(" CHECK return L_PAREN;
")" CHECK return R_PAREN;
"," CHECK return COMMA;
";" CHECK return SEMICOLON;
":" CHECK return COLON;
{identifier} {
	CHECK
	{
		strcpy(yylval.lval, yytext);
		return IDENTIFIER;
	}
}

[0-9]+\.[0-9]+f{0,1} {
	CHECK
	{
		yylval.val = atof(yytext);
		return CONST_FLOAT;
	}
}
[0-9]+ {
	CHECK
	{
		yylval.val = atoi(yytext);
		return CONST_INT;
	}
}
\'.\' {
	CHECK
	{
		yylval.val2[0] = yytext[1];
		yylval.val2[1] = '\0';
		return CONST_CHAR;
	}
}
\".*\" {
	CHECK
	{
		strcpy(yylval.val2, yytext);
		return CONST_STR;
	}
}
\" {
	CHECK
		printf("\033[31m Error in line %d \" encountered\n \033[0m", line);
}
. {
	CHECK
		printf("\033[31m Error in line %d undefined symbol '%s'\n \033[0m", line, yytext);
}
%%
