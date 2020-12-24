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
     I_CONSTANT = 259,
     F_CONSTANT = 260,
     STRING_LITERAL = 261,
     FUNC_NAME = 262,
     SIZEOF = 263,
     B_CONSTANT = 264,
     BOOL = 265,
     CHAR = 266,
     SHORT = 267,
     INT = 268,
     LONG = 269,
     SIGNED = 270,
     UNSIGNED = 271,
     FLOAT = 272,
     DOUBLE = 273,
     VOID = 274,
     AND_OP = 275,
     OR_OP = 276,
     EQ_OP = 277,
     LE_OP = 278,
     GE_OP = 279,
     CASE = 280,
     DEFAULT = 281,
     IF = 282,
     ELSE = 283,
     SWITCH = 284,
     WHILE = 285,
     DO = 286,
     FOR = 287,
     GOTO = 288,
     CONTINUE = 289,
     BREAK = 290,
     RETURN = 291,
     PTR_OP = 292,
     INC_OP = 293,
     DEC_OP = 294,
     LEFT_OP = 295,
     RIGHT_OP = 296,
     NE_OP = 297,
     MUL_ASSIGN = 298,
     DIV_ASSIGN = 299,
     MOD_ASSIGN = 300,
     ADD_ASSIGN = 301,
     SUB_ASSIGN = 302,
     LEFT_ASSIGN = 303,
     RIGHT_ASSIGN = 304,
     AND_ASSIGN = 305,
     XOR_ASSIGN = 306,
     OR_ASSIGN = 307,
     TYPEDEF_NAME = 308,
     ENUMERATION_CONSTANT = 309,
     TYPEDEF = 310,
     EXTERN = 311,
     STATIC = 312,
     AUTO = 313,
     REGISTER = 314,
     INLINE = 315,
     CONST = 316,
     RESTRICT = 317,
     VOLATILE = 318,
     STRUCT = 319,
     UNION = 320,
     ENUM = 321,
     ELLIPSIS = 322,
     COMPLEX = 323,
     IMAGINARY = 324,
     ALIGNAS = 325,
     ALIGNOF = 326,
     ATOMIC = 327,
     GENERIC = 328,
     NORETURN = 329,
     STATIC_ASSERT = 330,
     THREAD_LOCAL = 331
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define I_CONSTANT 259
#define F_CONSTANT 260
#define STRING_LITERAL 261
#define FUNC_NAME 262
#define SIZEOF 263
#define B_CONSTANT 264
#define BOOL 265
#define CHAR 266
#define SHORT 267
#define INT 268
#define LONG 269
#define SIGNED 270
#define UNSIGNED 271
#define FLOAT 272
#define DOUBLE 273
#define VOID 274
#define AND_OP 275
#define OR_OP 276
#define EQ_OP 277
#define LE_OP 278
#define GE_OP 279
#define CASE 280
#define DEFAULT 281
#define IF 282
#define ELSE 283
#define SWITCH 284
#define WHILE 285
#define DO 286
#define FOR 287
#define GOTO 288
#define CONTINUE 289
#define BREAK 290
#define RETURN 291
#define PTR_OP 292
#define INC_OP 293
#define DEC_OP 294
#define LEFT_OP 295
#define RIGHT_OP 296
#define NE_OP 297
#define MUL_ASSIGN 298
#define DIV_ASSIGN 299
#define MOD_ASSIGN 300
#define ADD_ASSIGN 301
#define SUB_ASSIGN 302
#define LEFT_ASSIGN 303
#define RIGHT_ASSIGN 304
#define AND_ASSIGN 305
#define XOR_ASSIGN 306
#define OR_ASSIGN 307
#define TYPEDEF_NAME 308
#define ENUMERATION_CONSTANT 309
#define TYPEDEF 310
#define EXTERN 311
#define STATIC 312
#define AUTO 313
#define REGISTER 314
#define INLINE 315
#define CONST 316
#define RESTRICT 317
#define VOLATILE 318
#define STRUCT 319
#define UNION 320
#define ENUM 321
#define ELLIPSIS 322
#define COMPLEX 323
#define IMAGINARY 324
#define ALIGNAS 325
#define ALIGNOF 326
#define ATOMIC 327
#define GENERIC 328
#define NORETURN 329
#define STATIC_ASSERT 330
#define THREAD_LOCAL 331




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 17 "c.y"
{
	BlockNode *block;
	ExprNode *expr;
	StmtNode *stmt;
	IdentiferNode *ident;
	NIdentifierParam *identparam;
	VariableDeclaration *var_decl;
	AssignmentNode *var_init;
	QualStorageTypeNode *var_stor;
	std::vector<ExprNode*> *exprvec;
	std::vector<VariableDeclaration*> *varvec;
	std::string *string;
	int token;
	CommonDeclarationNode *common_dec;
}
/* Line 1529 of yacc.c.  */
#line 217 "c.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

