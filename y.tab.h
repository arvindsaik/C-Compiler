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
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     INTEGER = 261,
     CASE = 262,
     DEFAULT = 263,
     IF = 264,
     ELSE = 265,
     SWITCH = 266,
     WHILE = 267,
     DO = 268,
     FOR = 269,
     GOTO = 270,
     CONTINUE = 271,
     BREAK = 272,
     RETURN = 273,
     VOLATILE = 274,
     VOID = 275,
     UNSIGNED = 276,
     UNION = 277,
     TYPEDEF = 278,
     STRUCT = 279,
     STATIC = 280,
     SIZEOF = 281,
     SIGNED = 282,
     SHORT = 283,
     REGISTER = 284,
     LONG = 285,
     INT = 286,
     FLOAT = 287,
     EXTERN = 288,
     ENUM = 289,
     DOUBLE = 290,
     CONST = 291,
     CHAR = 292,
     AUTO = 293,
     PTR_OP = 294,
     INC_OP = 295,
     DEC_OP = 296,
     LESS_OP = 297,
     GREAT_OP = 298,
     LE_OP = 299,
     GE_OP = 300,
     EQ_OP = 301,
     NE_OP = 302,
     AND_OP = 303,
     OR_OP = 304,
     NOT_OP = 305,
     XOR_OP = 306,
     MUL_OP = 307,
     DIV_OP = 308,
     ADD_OP = 309,
     SUB_OP = 310,
     MOD_OP = 311,
     MUL_ASSIGN = 312,
     DIV_ASSIGN = 313,
     MOD_ASSIGN = 314,
     ADD_ASSIGN = 315,
     EQ_ASSIGN = 316,
     SUB_ASSIGN = 317,
     AND_ASSIGN = 318,
     XOR_ASSIGN = 319,
     OR_ASSIGN = 320,
     UNARY = 321
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define INTEGER 261
#define CASE 262
#define DEFAULT 263
#define IF 264
#define ELSE 265
#define SWITCH 266
#define WHILE 267
#define DO 268
#define FOR 269
#define GOTO 270
#define CONTINUE 271
#define BREAK 272
#define RETURN 273
#define VOLATILE 274
#define VOID 275
#define UNSIGNED 276
#define UNION 277
#define TYPEDEF 278
#define STRUCT 279
#define STATIC 280
#define SIZEOF 281
#define SIGNED 282
#define SHORT 283
#define REGISTER 284
#define LONG 285
#define INT 286
#define FLOAT 287
#define EXTERN 288
#define ENUM 289
#define DOUBLE 290
#define CONST 291
#define CHAR 292
#define AUTO 293
#define PTR_OP 294
#define INC_OP 295
#define DEC_OP 296
#define LESS_OP 297
#define GREAT_OP 298
#define LE_OP 299
#define GE_OP 300
#define EQ_OP 301
#define NE_OP 302
#define AND_OP 303
#define OR_OP 304
#define NOT_OP 305
#define XOR_OP 306
#define MUL_OP 307
#define DIV_OP 308
#define ADD_OP 309
#define SUB_OP 310
#define MOD_OP 311
#define MUL_ASSIGN 312
#define DIV_ASSIGN 313
#define MOD_ASSIGN 314
#define ADD_ASSIGN 315
#define EQ_ASSIGN 316
#define SUB_ASSIGN 317
#define AND_ASSIGN 318
#define XOR_ASSIGN 319
#define OR_ASSIGN 320
#define UNARY 321




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

