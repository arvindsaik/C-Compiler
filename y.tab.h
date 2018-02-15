/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     UNARY = 258,
     NO_ELSE = 259,
     ELSE = 260,
     NE_OP = 261,
     EQ_OP = 262,
     LE_OP = 263,
     GE_OP = 264,
     IF = 265,
     WHILE = 266,
     FOR = 267,
     CONTINUE = 268,
     BREAK = 269,
     RETURN = 270,
     SIZEOF = 271,
     INC_OP = 272,
     DEC_OP = 273,
     LEFT_OP = 274,
     RIGHT_OP = 275,
     AND_OP = 276,
     OR_OP = 277,
     NOT_OP = 278,
     XOR_OP = 279,
     MUL_OP = 280,
     DIV_OP = 281,
     ADD_OP = 282,
     SUB_OP = 283,
     MOD_OP = 284,
     MUL_ASSIGN = 285,
     DIV_ASSIGN = 286,
     MOD_ASSIGN = 287,
     ADD_ASSIGN = 288,
     LEFT_ASSIGN = 289,
     RIGHT_ASSIGN = 290,
     DEF = 291,
     SUB_ASSIGN = 292,
     AND_ASSIGN = 293,
     XOR_ASSIGN = 294,
     OR_ASSIGN = 295,
     INT = 296,
     FLOAT = 297,
     CHAR = 298,
     UNSIGNED = 299,
     SIGNED = 300,
     VOID = 301,
     LONG = 302,
     SHORT = 303,
     IDENTIFIER = 304,
     CONST_INT = 305,
     CONST_FLOAT = 306,
     STRING_LITERAL = 307,
     CONST_CHAR = 308
   };
#endif
/* Tokens.  */
#define UNARY 258
#define NO_ELSE 259
#define ELSE 260
#define NE_OP 261
#define EQ_OP 262
#define LE_OP 263
#define GE_OP 264
#define IF 265
#define WHILE 266
#define FOR 267
#define CONTINUE 268
#define BREAK 269
#define RETURN 270
#define SIZEOF 271
#define INC_OP 272
#define DEC_OP 273
#define LEFT_OP 274
#define RIGHT_OP 275
#define AND_OP 276
#define OR_OP 277
#define NOT_OP 278
#define XOR_OP 279
#define MUL_OP 280
#define DIV_OP 281
#define ADD_OP 282
#define SUB_OP 283
#define MOD_OP 284
#define MUL_ASSIGN 285
#define DIV_ASSIGN 286
#define MOD_ASSIGN 287
#define ADD_ASSIGN 288
#define LEFT_ASSIGN 289
#define RIGHT_ASSIGN 290
#define DEF 291
#define SUB_ASSIGN 292
#define AND_ASSIGN 293
#define XOR_ASSIGN 294
#define OR_ASSIGN 295
#define INT 296
#define FLOAT 297
#define CHAR 298
#define UNSIGNED 299
#define SIGNED 300
#define VOID 301
#define LONG 302
#define SHORT 303
#define IDENTIFIER 304
#define CONST_INT 305
#define CONST_FLOAT 306
#define STRING_LITERAL 307
#define CONST_CHAR 308




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 1 "parser.y"
{
double val;
char lval[100];
}
/* Line 1529 of yacc.c.  */
#line 160 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

