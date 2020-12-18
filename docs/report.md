# Code Documentation

The aim of this project is to get some familiarity with the LLVM tool. Many research works have used to implement complex compiler features, including , but not limited to , code hardening, sensitivity analysis, verification etc.

Our aim is to use some of the LLVM functionality to mark a node as important and then remove that function from the binary, only to be called using a wrapper which is free to deal with this extracted function.

The code that we have till now in the repo contains implementation of some of the basic primitives of C language in LLVM 3.8.

The aim is to generate a valid llvm IR code, whic then izs used to generate an object file using the *llvm assembler*.

## LLVM version
The llvm or clan version has to be 3.8 for the _Makefile_ to work. The location of header files in some other version were changed and if someone is using other than 3.8 version, those locations has to be updated.

To check the version 
`clan --version`

If it shows something other than 3.8, use these commands to install and set 3.8 version as default

```
sudo update-alternatives --install /usr/bin/clang++ clang++ /usr/bin/clang++-3.8 100

sudo update-alternatives --install /usr/bin/clang clang /usr/bin/clang-3.8 100
```

Make sure in the Makefile we are using llvm-config-3.8


## Key files

**c.y** This file contains the rule of the parser. We use *bison* to generate a parser and _flex_ to generate the lexer. Lexer and parser, both are c codes, which takes the source code as the input and parses it in to extract the TOKENS present in the files.

An example will be:

`int a =10`

will be converted to:

`KEYWORD INDENTIFIER TOKEN CONSTANT (20)`

with the _constant_ carrying the value of the constant, i.e. 20, with itself for further processing. This is then verified agains the grammar present in the _c.y_ file. If the rules allows for such a construct then the code is valid or else the compiler will throw an error.

**c.l** is the lexer file, which contains the rule for the lexical analysis.

_cc.cpp_ THis is the main file which orchestrates the whole operation. This is equivalent to _gcc_. In its current form, it takes  a source code as the input and generates the corresponding IR construct (assuming that there is no error in the sourc code).

## Key points

YY_DECL is the macro in the c.l file which contains the call to the yy_lex or the lexer. We do not call this directly. This is called by the parser when this is required.

Similarly, _yy_parse()_ is the key function used by the parser to generate. We call this in our _cc.cpp_ file followed by the call to generate the code.

cc.cpp:

```
 char const *filename = argv[1];
    yyin = fopen(filename, "r");
    assert(yyin);

    int ret_code = yyparse();
    cout << "Return Code: " << ret_code << endl;

    CodeGenContext context; // populated during parsing
    context.generateCode(*programBlock);
```

_generateCode_ in codegen.cpp file:

```
void CodeGenContext::generateCode(BlockNode &rootNode) {
    rootNode.codeGen(*this);
    module->dump();
}
```

## The goal

The goal here is, other than generating an IR code and then the final machine code (object file), we need to build an abstract syntax tree or an AST. AST represents the source code in an tree format using abstract representation of the code. The tree does not contains all the information related to the source code, it only contains the structural information.
More details on this can be found [here](https://en.wikipedia.org/wiki/Abstract_syntax_tree).

The tree contain, _nodes_ . These nodes represent the structural inforamtion about the code. Hence, first we need to define these nodes. These nodes are defined in the _c.y_ file:

```
%union {
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
```

These nodes are then used to categorise different _sub-nodes_ into thee main nodes. This is also present in _c.y_ file.
```
...
%type <var_decl> parameter_declaration
%type <block> program translation_unit
%type <block> compound_statement block_item_list statement

%type <expr> primary_expression postfix_expression unary_expression cast_expression
%type <expr> multiplicative_expression additive_expression shift_expression
...
```

_program_  and _block_item_list_ is written in two separate lines to ease the understanding. It cab be written in the same line also.

Keywords such as _if_, _while_, _do_ etc. comes under the TOKEN class, and they are defined in the c.y file as follow:

```
%token <string> IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF B_CONSTANT
%token <string> BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token <token> ';' '='
%token <token> '+' '*' '-' '/' '%' AND_OP OR_OP '^' '|' '&' EQ_OP
%token <token> LE_OP GE_OP '<' '>'
```

### Rules

After defining the nodes, sub-nodes and tokens, we define the rules of the language in the _c.y_ file.

```
program : translation_unit { programBlock = $1; }
		;

abstract_declarator
	: pointer direct_abstract_declarator {}
	| pointer {}
	| direct_abstract_declarator {}
	;



alignment_specifier
	: ALIGNAS '(' type_name ')' {}
	| ALIGNAS '(' constant_expression ')' {}
	;
```

Let's go through one example:

```
argument_expression_list
	: assignment_expression { $$ = new ExpressionList(); $$->push_back($<expr>1);}
	| argument_expression_list ',' assignment_expression { $1->push_back($<expr>3);}
	;
```

This is matched, when we have an argument list, say **( 5,3,4 )**. Here 5,3,4 matches the argument_list. The braces are taken care by the rules before this.  

`| postfix_expression '(' argument_expression_list ')' {$$ = new FunctionCallNode(*$1, *$3) ;}`  

 Hence we have 5,3,4. This is matching the rule 2. 

    * Rule 2: {5,3} , 4
    * Rule 2: {5} , 3
    * Rule 1: 5 

In the third step, a new _ExpresssionList_ is created, which is stored in $$. The type of this ExpressionList is defined in the file _node.h_

`typedef vector<ExprNode *> ExpressionList;`

This is basically a vector of expression nodes. 5, will be pushed in this, when the matching rolls back. 

When it rolls back to step 2. $1 contains the vector (Expression List) just generated, with 5 in it and $3 will contains 3. $2 will contains the comma(,) and hence we ignore it. In this step we push $3 in $1 and hence now our list contains, {5,3}. 

Similarly, for the step 1, we push back 4 in the ExpressionList and we have the final list with 5,3 and 4 in it.

## Running the code
Write a sample code, say **test.c**:
```
extern int printf(char const *format, ...);
int main(){
	int a = 10;
	int b = a+20;
	printf("B is %d\n", b);
	return 0;
}
```

```
make cc
./cc test.c 2> test.ll #(ensure that the extension is ll)
llvm-as test.ll # This will generate the file test.bc 
lli test.bc # This will link the code and execute it
```
The content of test.ll will be:

```
; ModuleID = 'main'

@.str = private constant [9 x i8] c"B is %d\0A\00"

declare i32 @printf(i8*, ...)

define internal i32 @main() {
entry:
  %a = alloca i32
  %0 = load i32, i32* %a
  store i32 10, i32* %a
  %b = alloca i32
  %1 = load i32, i32* %b
  %2 = load i32, i32* %a
  %3 = load i32, i32* %a
  %4 = add i32 %3, 20
  store i32 %4, i32* %b
  %5 = load i32, i32* %b
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str, i32 0, i32 0), i32 %5)
  ret i32 0
}

```
This is in th _intermmediate representation _ form.  
`%2 = load i32, i32* %a` , this line is not requried and seems like there is some bug. 