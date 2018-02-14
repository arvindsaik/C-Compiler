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
     IF = 258,
     ELSE = 259,
     WHILE = 260,
     FOR = 261,
     CONTINUE = 262,
     BREAK = 263,
     RETURN = 264,
     SIZEOF = 265,
     INC_OP = 266,
     DEC_OP = 267,
     LEFT_OP = 268,
     RIGHT_OP = 269,
     LE_OP = 270,
     GE_OP = 271,
     EQ_OP = 272,
     NE_OP = 273,
     AND_OP = 274,
     OR_OP = 275,
     NOT_OP = 276,
     XOR_OP = 277,
     MUL_OP = 278,
     DIV_OP = 279,
     ADD_OP = 280,
     SUB_OP = 281,
     MOD_OP = 282,
     MUL_ASSIGN = 283,
     DIV_ASSIGN = 284,
     MOD_ASSIGN = 285,
     ADD_ASSIGN = 286,
     LEFT_ASSIGN = 287,
     RIGHT_ASSIGN = 288,
     DEF = 289,
     SUB_ASSIGN = 290,
     AND_ASSIGN = 291,
     XOR_ASSIGN = 292,
     OR_ASSIGN = 293,
     INT = 294,
     FLOAT = 295,
     CHAR = 296,
     STRUCT = 297,
     UNION = 298,
     UNSIGNED = 299,
     SIGNED = 300,
     VOID = 301,
     LONG = 302,
     SHORT = 303,
     IDENTIFIER = 304,
     CONST_INT = 305,
     CONST_FLOAT = 306,
     STRING_LITERAL = 307,
     CONST_CHAR = 308,
     UNARY = 309
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define WHILE 260
#define FOR 261
#define CONTINUE 262
#define BREAK 263
#define RETURN 264
#define SIZEOF 265
#define INC_OP 266
#define DEC_OP 267
#define LEFT_OP 268
#define RIGHT_OP 269
#define LE_OP 270
#define GE_OP 271
#define EQ_OP 272
#define NE_OP 273
#define AND_OP 274
#define OR_OP 275
#define NOT_OP 276
#define XOR_OP 277
#define MUL_OP 278
#define DIV_OP 279
#define ADD_OP 280
#define SUB_OP 281
#define MOD_OP 282
#define MUL_ASSIGN 283
#define DIV_ASSIGN 284
#define MOD_ASSIGN 285
#define ADD_ASSIGN 286
#define LEFT_ASSIGN 287
#define RIGHT_ASSIGN 288
#define DEF 289
#define SUB_ASSIGN 290
#define AND_ASSIGN 291
#define XOR_ASSIGN 292
#define OR_ASSIGN 293
#define INT 294
#define FLOAT 295
#define CHAR 296
#define STRUCT 297
#define UNION 298
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
#define UNARY 309




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 1 "parser.y"
{
double val;
char lval[100];
}
/* Line 1529 of yacc.c.  */
#line 162 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

