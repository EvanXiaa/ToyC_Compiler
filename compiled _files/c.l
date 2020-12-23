%e  1019
%p  2807
%n  371
%k  284
%a  1213
%o  1117

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\n\f]

%{
#include <string>
#include "node.h"
#include "c.tab.hpp"

extern int sym_type(const char *);  /* returns type from symbol table */
#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it

extern void yyerror(const char *);  /* prints grammar violation message */
static void comment(void);
static int check_type(void);
#define YY_DECL extern "C" int yylex()

#define SAVE_TOKEN  yylval.string = new std::string(yytext, yyleng)
#define TOKEN(t)    (yylval.token = t)
%}


%%
"/*"                                    { comment(); }
"//".*                                    { /* consume //-comment */ }

"auto"                  { return TOKEN(AUTO); }
"break"                 { return TOKEN(BREAK); }
"case"                  { return TOKEN(CASE); }
"const"                 { return TOKEN(CONST); }
"continue"              { return TOKEN(CONTINUE); }
"default"               { return TOKEN(DEFAULT); }
"do"                    { return TOKEN(DO); }
"else"                  { return TOKEN(ELSE); }
"enum"                  { return TOKEN(ENUM); }
"extern"                { return TOKEN(EXTERN); }
"for"                   { return TOKEN(FOR); }
"goto"                  { return TOKEN(GOTO); }
"if"                    { return TOKEN(IF); }
"inline"                { return TOKEN(INLINE); }
"register"              { return TOKEN(REGISTER); }
"restrict"              { return TOKEN(RESTRICT); }
"return"                { return TOKEN(RETURN); }
"sizeof"                { return TOKEN(SIZEOF); }
"static"                { return TOKEN(STATIC); }
"switch"                { return TOKEN(SWITCH); }
"typedef"               { return TOKEN(TYPEDEF); }
"union"                 { return TOKEN(UNION); }
"volatile"              { return TOKEN(VOLATILE); }
"while"                 { return TOKEN(WHILE); }
"_Alignas"                              { return TOKEN(ALIGNAS); }
"_Alignof"                              { return TOKEN(ALIGNOF); }
"_Atomic"                               { return TOKEN(ATOMIC); }
"_Complex"                              { return TOKEN(COMPLEX); }
"_Generic"                              { return TOKEN(GENERIC); }
"_Imaginary"                            { return TOKEN(IMAGINARY); }
"_Noreturn"                             { return TOKEN(NORETURN); }
"_Static_assert"                        { return TOKEN(STATIC_ASSERT); }
"_Thread_local"                         { return TOKEN(THREAD_LOCAL); }
"__func__"                              { return TOKEN(FUNC_NAME); }

"void"                  { SAVE_TOKEN; return (VOID); }
"char"                  { SAVE_TOKEN; return (CHAR); }
"double"                { SAVE_TOKEN; return (DOUBLE); }
"float"                 { SAVE_TOKEN; return(FLOAT); }
"int"                   { SAVE_TOKEN; return (INT); }
"long"                  { SAVE_TOKEN; return(LONG); }
"short"                 { SAVE_TOKEN; return (SHORT); }
"signed"                { SAVE_TOKEN; return (SIGNED); }
"unsigned"              { SAVE_TOKEN; return (UNSIGNED); }
"_Bool"                 { SAVE_TOKEN; return (BOOL); }
"true"                  {SAVE_TOKEN; return B_CONSTANT;}
"false"                  {SAVE_TOKEN; return B_CONSTANT;}

"struct"                { SAVE_TOKEN; return STRUCT; }


{L}{A}*                 { SAVE_TOKEN; return check_type(); }



{HP}{H}+{IS}?               { SAVE_TOKEN; return I_CONSTANT; }
{NZ}{D}*{IS}?               { SAVE_TOKEN; return I_CONSTANT; }
"0"{O}*{IS}?                { SAVE_TOKEN; return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'" { SAVE_TOKEN; return I_CONSTANT; }

{D}+{E}{FS}?                { SAVE_TOKEN; return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?        { SAVE_TOKEN; return F_CONSTANT; }
{D}+"."{E}?{FS}?            { SAVE_TOKEN; return F_CONSTANT; }
{HP}{H}+{P}{FS}?            { SAVE_TOKEN; return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?     { SAVE_TOKEN; return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?         { SAVE_TOKEN; return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+   { SAVE_TOKEN; return STRING_LITERAL; }

"..."                   { return TOKEN(ELLIPSIS); }
">>="                   { return TOKEN(RIGHT_ASSIGN); }
"<<="                   { return TOKEN(LEFT_ASSIGN); }
"+="                    { return TOKEN(ADD_ASSIGN); }
"-="                    { return TOKEN(SUB_ASSIGN); }
"*="                    { return TOKEN(MUL_ASSIGN); }
"/="                    { return TOKEN(DIV_ASSIGN); }
"%="                    { return TOKEN(MOD_ASSIGN); }
"&="                    { return TOKEN(AND_ASSIGN); }
"^="                    { return TOKEN(XOR_ASSIGN); }
"|="                    { return TOKEN(OR_ASSIGN); }
">>"                    { return TOKEN(RIGHT_OP); }
"<<"                    { return TOKEN(LEFT_OP); }
"++"                    { return TOKEN(INC_OP); }
"--"                    { return TOKEN(DEC_OP); }
"->"                    { return TOKEN(PTR_OP); }
"&&"                    { return TOKEN(AND_OP); }
"||"                    { return TOKEN(OR_OP); }
"<="                    { return TOKEN(LE_OP); }
">="                    { return TOKEN(GE_OP); }
"=="                    { return TOKEN(EQ_OP); }
"!="                    { return TOKEN(NE_OP); }
";"                     { return TOKEN(';'); }
("{"|"<%")              { return TOKEN('{'); }
("}"|"%>")              { return TOKEN('}'); }
","                     { return TOKEN(','); }
":"                     { return TOKEN(':'); }
"="                     { return TOKEN('='); }
"("                     { return TOKEN('('); }
")"                     { return TOKEN(')'); }
("["|"<:")              { return TOKEN('['); }
("]"|":>")              { return TOKEN(']'); }
"."                     { return TOKEN('.'); }
"&"                     { return TOKEN('&'); }
"!"                     { return TOKEN('!'); }
"~"                     { return TOKEN('~'); }
"-"                     { return TOKEN('-'); }
"+"                     { return TOKEN('+'); }
"*"                     { return TOKEN('*'); }
"/"                     { return TOKEN('/'); }
"%"                     { return TOKEN('%'); }
"<"                     { return TOKEN('<'); }
">"                     { return TOKEN('>'); }
"^"                     { return TOKEN('^'); }
"|"                     { return TOKEN('|'); }
"?"                     { return TOKEN('?'); }

{WS}+                   { /* whitespace separates tokens */ }
.                   { /* discard bad characters */ }

%%

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

static void comment(void)
{
    printf("Removing comments..\n");
    int c;

    while ((c = yyinput()) != 0)
        if (c == '*')
        {
            while ((c = yyinput()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
        }
    // yyerror("unterminated comment");
}

static int check_type(void)
{
    switch (sym_type(yytext))
    {
    case TYPEDEF_NAME:                /* previously defined */
        return TYPEDEF_NAME;
    case ENUMERATION_CONSTANT:        /* previously defined */
        return ENUMERATION_CONSTANT;
    default:                          /* includes undefined */
        SAVE_TOKEN;
        return  IDENTIFIER;
    }
}
