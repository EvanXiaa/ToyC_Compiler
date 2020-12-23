#include <stack>
#include <typeinfo>
#include <llvm/IR/Module.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/LegacyPassManager.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/CallingConv.h>
#include <llvm/IR/IRPrintingPasses.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/Bitcode/BitstreamReader.h>
#include <llvm/Bitcode/BitstreamWriter.h>
#include <llvm/Support/TargetSelect.h>
#include <llvm/ExecutionEngine/ExecutionEngine.h>
#include <llvm/ExecutionEngine/MCJIT.h>
#include <llvm/ExecutionEngine/GenericValue.h>
#include <llvm/Support/raw_ostream.h>

using namespace llvm;
using namespace std;

class BlockNode;

static LLVMContext llvmContext;

class CodeGenBlock {
public:
    BasicBlock *block;
    Value *returnValue;
    map<string, Value *> locals;
    CodeGenBlock *parent;
};

class CodeGenContext {
    stack<CodeGenBlock *> blocks;
    void pushBlock(BasicBlock *block, CodeGenBlock *_parent) {
        blocks.push(new CodeGenBlock());
        blocks.top()->returnValue = NULL;
        blocks.top()->block = block;
        blocks.top()->parent = _parent;
    }

public:

    Module *module;
    CodeGenContext() { module = new Module("main", llvmContext); }
    void generateCode(BlockNode &rootNode);

    map<std::string, Value *> &locals() { return blocks.top()->locals; }
    CodeGenBlock *currentCgenBlock() {
        return blocks.top();
    }
    BasicBlock *currentBlock() {
        if (blocks.size() == 0) {
            cout << "ERROR currentBlock. Size is 0" << endl;
            return NULL;
        }
        return blocks.top()->block;
    }
    bool isBlocksEmpty() {
        return (blocks.size() == 0);
    }
    int getSize() {
        return (blocks.size());
    }

    void pushBlock(BasicBlock *block) {
        cout<<"PUSHING: "<<getSize()<< endl;
        if (getSize() == 0) {
            blocks.push(new CodeGenBlock());
            blocks.top()->returnValue = NULL;
            blocks.top()->block = block;
            blocks.top()->parent = nullptr;
        } else {
            pushBlock(block, blocks.top());
        }

    }
    void popBlock() {
        CodeGenBlock *top = blocks.top();
            blocks.pop();
            delete top;
    }

    void setCurrentReturnValue(Value *value) {
        if(getSize()==0){
            cerr<<"ERROR"<<endl;
        }

        blocks.top()->returnValue = value; }

    Value *getCurrentReturnValue() { return blocks.top()->returnValue; }

};
