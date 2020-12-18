#include <iostream>
#include <fstream>
#include "codegen.h"
#include "node.h"
#include "c.tab.hpp"
#include <assert.h>
#include <llvm/Bitcode/ReaderWriter.h>

using namespace std;

int yyparse();

extern "C" int yylex();
extern "C" FILE *yyin;

extern BlockNode *programBlock;

static void usage() {
    cout << "Usage: cc <prog.c> <llvm_bitcode_file_out>\n";
}

int main(int argc, char **argv) {
    if (argc < 2) {
        usage();
        exit(1);
    }
    char const *filename = argv[1];
    yyin = fopen(filename, "r");
    assert(yyin);

    int ret_code = yyparse();
    cout << "Return Code: " << ret_code << endl;

    CodeGenContext context; // populated during parsing
    context.generateCode(*programBlock);


    return 0;
}

