/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_C_TAB_HPP_INCLUDED
# define YY_YY_C_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "c.y" /* yacc.c:1909  */

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

#line 147 "c.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C_TAB_HPP_INCLUDED  */
