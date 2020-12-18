#include <iostream>
#include <vector>
#include <llvm/IR/Value.h>
#include <typeinfo>

using namespace std;
using namespace llvm;

class CodeGenContext;

class StmtNode;

class ExprNode;

class VariableDeclaration;

class CommonDeclaration;

typedef vector<StmtNode *> StatementList;
typedef vector<ExprNode *> ExpressionList;
typedef vector<VariableDeclaration *> VariableList;

class ASTNode {
public:
    bool debug = true;

    virtual Value *codeGen(CodeGenContext &context) { return NULL; }
};

class ExprNode : public ASTNode {
};

class StmtNode : public ASTNode {
};

class LongNode : public ExprNode {
public:
    long value;

    LongNode(long _value) : value(_value) { cout << "LongNode: " << value << endl; }

    LongNode(int uop, ExprNode *exprNode) {
        value = ((LongNode *) exprNode)->value;
        switch (uop) {
            case '-':
                value = -1 * value;
            default:
                cout << "Error Unary" << endl;
        }
    }

    virtual Value *codeGen(CodeGenContext &context);
};

class CharNode : public ExprNode {
public:
    char value;

    CharNode(char value) : value(value) {}

    virtual Value *codeGen(CodeGenContext &context);
};

class IntNode : public ExprNode {
public:
    int value;

    IntNode(int value) : value(value) { cout << "INTNODE: " << value << endl; }

    IntNode(int uop, ExprNode *exprNode) {
        cout << "INTNODE\n";
        value = ((IntNode *) exprNode)->value;
        switch (uop) {
            case '-':
                value = -1 * value;
            default:
                cout << "Error Unary" << endl;
        }
    }

    virtual Value *codeGen(CodeGenContext &context);
};

class DoubleNode : public ExprNode {
public:
    double value;

    DoubleNode(double value) : value(value) {}

    DoubleNode(int uop, ExprNode *exprNode) {
        value = ((DoubleNode *) exprNode)->value;
        switch (uop) {
            case '-':
                value = -1 * value;
            default:
                cout << "Error Unary" << endl;
        }
    }

    virtual Value *codeGen(CodeGenContext &context);
};

class BoolNode : public ExprNode {
public:
    bool value = false;

    BoolNode(string &name) {
        cout << "Boolean Node: " << name << endl;
        if (name.compare("true") == 0) {
            value = true;
        } else {
            value = false;
        }
    }

    BoolNode(bool val) {
        value = val;
    }

    virtual Value *codeGen(CodeGenContext &context);
};

class ExprBoolNode : public ExprNode {
public:
    ExprNode *lhs;
    ExprNode *rhs;
    int op;

    ExprBoolNode(int _op, ExprNode *_lhs, ExprNode *_rhs) {
        op = _op;
        lhs = _lhs;
        rhs = _rhs;
    }

    virtual Value *codeGen(CodeGenContext &context);
};

class StringNode : public ExprNode {
public:
    string value;

    StringNode(string value) : value(value) {}

    virtual Value *codeGen(CodeGenContext &context);
};

// ---------------

class IdentiferNode : public ExprNode {
public:
    string name;

    IdentiferNode(const string &name) : name(name) {}

    IdentiferNode(ExprNode &idexpr) : name(((const IdentiferNode &) idexpr).name) {}

    virtual Value *codeGen(CodeGenContext &context);
};

class FunctionCallNode : public ExprNode {
public:
    const IdentiferNode &id;
    ExpressionList arguments;

    FunctionCallNode(const ExprNode &id, ExpressionList &arguments) :
            id((const IdentiferNode &) id), arguments(arguments) {}

    FunctionCallNode(const ExprNode &id) : id((const IdentiferNode &) id) {}

    virtual Value *codeGen(CodeGenContext &context);
};

class BinaryOperatorNode : public ExprNode {
public:
    int op;
    ExprNode &lhs;
    ExprNode &rhs;

    BinaryOperatorNode(ExprNode &lhs, int op, ExprNode &rhs) :
            lhs(lhs), rhs(rhs), op(op) {
        cout << "++++++++++" << endl;
        cout << "BO: " << op << endl;
        cout << "lhs: " << &lhs << endl;
        cout << "rhs: " << &rhs << endl;
        cout << "-----------" << endl;
    }
//    BinaryOperatorNode(IdentiferNode &lhs, char op, ExprNode &rhs) :
//            lhs(lhs), rhs(rhs), op(op) {
//        cout << "++++++++++" << endl;
//        cout << "BO: 1: " << op << endl;
//        cout << "lhs: " << &lhs << endl;
//        cout << "rhs: " << &rhs << endl;
//        cout << "-----------" << endl;
//    }

    virtual Value *codeGen(CodeGenContext &context);
};

class UnaryOperatorNode : public ExprNode {
public:
    int op;
    ExprNode &lhs;
    bool onleft = false;

    UnaryOperatorNode(ExprNode &lhs, int op, bool _onleft = false) :
            lhs(lhs), op(op) {
        onleft = _onleft;
        cout << "++++++++++" << endl;
        cout << "UO: 1: " << op << endl;
        cout << "lhs: " << &lhs << endl;
        cout << "-----------" << endl;
    }

    virtual Value *codeGen(CodeGenContext &context);
};

class BlockNode : public ExprNode {
public:
    StatementList statements;

    BlockNode() { cout << "Creating a New Block" << endl; }

    virtual Value *codeGen(CodeGenContext &context);
};

class ReturnStatementNode : public StmtNode {
public:
    ExprNode *expression;

    ReturnStatementNode() {
        expression = NULL;
    }

    ReturnStatementNode(ExprNode *vexpression) { expression = vexpression; }

    virtual Value *codeGen(CodeGenContext &context);
};

class CommonDeclarationNode : public ExprNode {
public:
    bool isFunc = false;
    bool isPtr = false;

    void setIsPtr(bool isPtr) {
        CommonDeclarationNode::isPtr = isPtr;
    }

    void setIsFunc(bool isFunc) {
        CommonDeclarationNode::isFunc = isFunc;
    }
};

class AssignmentNode : public CommonDeclarationNode {
    IdentiferNode *backup;
    IdentiferNode &id;
    bool isBackup = false;

public:
    ExprNode *assignmentExpr;
    int op;

    void setOp(int op) {
        AssignmentNode::op = op;
//        switch (op) {
//            case ADD_ASSIGN:
//                assignmentExpr = new BinaryOperatorNode(id, '+', id);
//                break;
//            case '=':
//            default:
//                cout << "Nothing to be done\n";
//        }
    }

    IdentiferNode &getId() {
        if (isBackup)
            return *backup;
        else
            return id;
    }

    AssignmentNode(IdentiferNode *identifier, bool _isPtr = false) :
            id(*identifier) {
        isPtr = _isPtr;
        if (debug) {
            cout << "+++++++++++++++++++++++++" << endl;
            cout << "VA 0 " << endl;
            cout << "Name: " << id.name << endl;
            cout << "IsPtr: " << isPtr << endl;
            if (assignmentExpr)
                cout << "Assig: " << assignmentExpr << "\n ";
            else
                cout << "AssigExpr is NULL\n" << endl;
            cout << "Debug OK" << endl;
            cout << "-------------------------" << endl;
        }
    }

    //Required for parser files
    AssignmentNode(ExprNode &expression, bool _isPtr = false) :
            id(((AssignmentNode *) &expression)->id) {
        isPtr = _isPtr;
        assignmentExpr = NULL;
        if (debug) {
            cout << "+++++++++++++++++++++++++" << endl;
            cout << "VA 1 " << endl;
            cout << "Name: " << id.name << endl;
            cout << "IsPtr: " << isPtr << endl;
            if (assignmentExpr)
                cout << "Assig: " << assignmentExpr << "\n ";
            else
                cout << "AssigExpr is NULL\n" << endl;
            cout << "Debug OK" << endl;
            cout << "-------------------------" << endl;
        }
    }

    // Required for constructor called in VariableDeclaration
    AssignmentNode(IdentiferNode &id, ExprNode *assignmentExpr, bool _isptr = false) :
            id(id), assignmentExpr(assignmentExpr) {
        isPtr = _isptr;
        if (debug) {
            cout << "+++++++++++++++++++++++++" << endl;
            cout << "VA 2 " << endl;
            cout << "Name: " << id.name << endl;
            cout << "IsPtr: " << isPtr << endl;
            if (assignmentExpr)
                cout << "Assig: " << assignmentExpr << "\n ";
            else
                cout << "AssigExpr is NULL\n" << endl;
            cout << "Debug OK" << endl;
            cout << "-------------------------" << endl;
        }
    }

    // Required for parser files
    AssignmentNode(ExprNode &expression, ExprNode *assignmentExpr) :
            id(((AssignmentNode *) &expression)->id), assignmentExpr(assignmentExpr) {

        if (dynamic_cast<AssignmentNode *>(&expression)) {
            if (debug) {
                cout << "Assingment Node" << endl;
            }
            isPtr = ((AssignmentNode *) &expression)->isPtr;
        } else if (dynamic_cast<IdentiferNode *>(&expression)) {
            backup = ((IdentiferNode *) &expression);
            isBackup = true;
            if (debug) {
                cout << "This is indentfier type: " << endl;
                cout << ((IdentiferNode *) &expression)->name << endl;
                cout << "Assignment Done" << endl;
            }
        } else {
            if (debug) {
                cout << "ERROR this is not AssigNode. It is: " << typeid(expression).name() << endl;
            }
        }
        if (debug) {
            cout << "+++++++++++++++++++++++++" << endl;
            cout << "VA 3 " << endl;
//            cout << "Name: "<<id.name << endl;
//            cout << "IsPtr: "<<isPtr << endl;
            if (assignmentExpr)
                cout << "Assig: " << assignmentExpr << "\n ";
            else
                cout << "AssigExpr is NULL\n" << endl;
            cout << "Debug OK" << endl;
            cout << "-------------------------" << endl;
        }
    }

    virtual Value *codeGen(CodeGenContext &context);
};

class QualStorageTypeNode : public ExprNode {
public:
    IdentiferNode *qualifier;
    IdentiferNode *storage;
    IdentiferNode *type;

    QualStorageTypeNode() {
        qualifier = NULL;
        storage = NULL;
        type = NULL;
    }

    // THis is required for call made to NULL, NULL, type
    QualStorageTypeNode(IdentiferNode *qual, IdentiferNode *_stor, IdentiferNode *_type) :
            qualifier(qual), storage(_stor), type(_type) {
        if (debug)
            cout << "NS 1 " << endl;
    }

    QualStorageTypeNode(IdentiferNode *qual, IdentiferNode *_stor, QualStorageTypeNode *_type) :
            qualifier(qual), storage(_stor), type(_type->type) {
        if (_type->qualifier) {
            qualifier = _type->qualifier;
        }

        if (debug) {
            cout << "NS 2 " << endl;
            cout << "Type: " << type->name << endl;
        }
    }

    void setStorage(IdentiferNode *storage) {
        QualStorageTypeNode::storage = storage;
    }

    void setType(IdentiferNode *type) {
        QualStorageTypeNode::type = type;
    }

    void setQualifier(IdentiferNode *qualifier) {
        QualStorageTypeNode::qualifier = qualifier;
    }


};

class VariableDeclaration : public StmtNode {
public:
    bool isPtr = false;
    QualStorageTypeNode *storageType;
    IdentiferNode &id;
    ExprNode *assignmentExpr;

    VariableDeclaration(const ExprNode &type, IdentiferNode &id) :
            id(id), storageType(
            new QualStorageTypeNode(NULL, NULL, (IdentiferNode *) &type)) {
        assignmentExpr = NULL;
        if (debug) {
            cout << "VD 1" << endl;
        }
    }


    VariableDeclaration(const IdentiferNode &type, IdentiferNode &id) :
            id(id), storageType(
            new QualStorageTypeNode(NULL, NULL, (IdentiferNode *) &type)) {
        assignmentExpr = NULL;
        if (debug) {
            cout << "VD 2" << endl;
        }
    }

    VariableDeclaration(QualStorageTypeNode &storageType, ExprNode &assig) :
            storageType(&storageType),
            id(((AssignmentNode *) &assig)->getId()) {

        assignmentExpr = ((AssignmentNode *) &assig)->assignmentExpr;
        isPtr = ((AssignmentNode *) &assig)->isPtr;

        if (dynamic_cast<IntNode *>(assignmentExpr)) {
            if (storageType.type->name.compare("double") == 0) {
                cout << "Correction needed" << endl;
                assignmentExpr = new DoubleNode(((IntNode *) assignmentExpr)->value);
            }
        } else if (dynamic_cast<DoubleNode *>(assignmentExpr)) {
            if (storageType.type->name.compare("int") == 0) {
                cout << "Correction needed" << endl;
                assignmentExpr = new IntNode(((DoubleNode *) assignmentExpr)->value);
            }
        }

        if (debug) {
            cout << "+++++++++++++++++++++++++" << endl;
            cout << "VD 3 " << endl;
            if (assignmentExpr)
                cout << "Assig: " << assignmentExpr << "\n ";
            else
                cout << "AssigExpr is NULL\n" << endl;

            cout << "Name: " << id.name << endl;
            cout << "isPtr: " << isPtr << endl;
            cout << "type: " << storageType.type->name << endl;
            cout << "qual: " << storageType.qualifier << endl;
            cout << "Debug OK" << endl;
            cout << "-------------------------" << endl;
        }
    }

    VariableDeclaration(QualStorageTypeNode &storageType, IdentiferNode &assig) :
            id(assig),
            storageType(&storageType) {
        if (debug) {
            cout << "VD 4" << endl;
            cout << (&assig)->name << endl;
            cout << id.name << endl;
            cout << "Debug OK" << endl;
        }
    }


    virtual Value *codeGen(CodeGenContext &context);
};

class NIdentifierParam : public CommonDeclarationNode {
public:
    IdentiferNode *id;
    VariableList arguments;
    bool ellipsis = false;

    void setEllipsis(bool ellipsis) {
        NIdentifierParam::ellipsis = ellipsis;
    }

    void setId(ExprNode *_id) {
        NIdentifierParam::id = &dynamic_cast<AssignmentNode *>(_id)->getId();
    }

    NIdentifierParam(const NIdentifierParam &_arguments) {
        cout << "Copy COnst" << endl;
    }

    NIdentifierParam(const VariableList &_arguments) :
            arguments(_arguments) {
        isFunc = true;
        if (debug) {
            cout << "IP 1" << endl;
            cout << "IP 1: " << arguments.front()->storageType->type->name << endl;
            if (isFunc) {
                cout << "THis is function" << endl;
            }

        }
    }

    NIdentifierParam(const ExprNode &id, const VariableList &_arguments, const bool _isF = false) :
            id(&((AssignmentNode *) &id)->getId()), arguments(_arguments) {
        isFunc = _isF;
        if (debug) {
            cout << "IP 2" << endl;
            cout << "IP 2: " << _arguments.front()->id.name << endl;
            cout << "IP 2: " << arguments.front()->storageType->type->name << endl;
            if (isFunc) {
                cout << "THis is function" << endl;
            }

        }
    }

//    NIdentifierParam(const string _name, const bool _isF = false) :
//            id(id), isFunc(_isF) {}

    NIdentifierParam(ExprNode &id, const bool _isF = false) :
            id(&((AssignmentNode *) &id)->getId()) {
        isFunc = _isF;
        if (debug) {
            cout << "IP 2" << endl;
            if (isFunc) {
                cout << "THis is function" << endl;
            }

            if (dynamic_cast<IdentiferNode *>(&id)) {
                cout << "IP: This is Indetifier" << endl;
            } else if (dynamic_cast<AssignmentNode *>(&id)) {
                cout << "IP: This is AssignmentNode" << endl;
            } else {
                cout << "IP: ERROR" << endl;
            }
        }
    }
};

class IfNode : public StmtNode {
public:
    BlockNode *truecond;
    BlockNode *falsecond;
    ExprBoolNode *cond;

    IfNode(ExprNode *exprNode, BlockNode *true_blockNode, BlockNode *false_blockNode) {
        cout << "If Node 1" << endl;
        cout << typeid(*exprNode).name() << endl;
        if (dynamic_cast<IntNode *>(exprNode)) {
            IntNode *intNode = dynamic_cast<IntNode *>(exprNode);
            if (intNode->value > 0) {
                cond = reinterpret_cast<ExprBoolNode *>(new BoolNode(true));
            } else {
                cond = reinterpret_cast<ExprBoolNode *>(new BoolNode(false));
            }
        } else {
            cond = (ExprBoolNode *) exprNode;
        }
        truecond = true_blockNode;
        falsecond = false_blockNode;
    }

    IfNode(ExprNode *exprNode, BlockNode *true_blockNode) {
        cout << "If Node 2" << endl;
        cond = dynamic_cast<ExprBoolNode *>(exprNode);
        truecond = true_blockNode;
        falsecond = nullptr;
    }

    virtual Value *codeGen(CodeGenContext &context);
};

class WhileLoopNode : public StmtNode {
public:
    ExprBoolNode *cond;
    BlockNode *block;


    WhileLoopNode(ExprNode *exprNode, BlockNode *_block) {
        cout << "WHile Node 1" << endl;
        cout << typeid(*exprNode).name() << endl;
        cond = (ExprBoolNode *) exprNode;
        block = _block;
    }


    virtual Value *codeGen(CodeGenContext &context);
};

class DoWhileLoopNode : public StmtNode {
public:
    ExprBoolNode *cond;
    BlockNode *block;


    DoWhileLoopNode(ExprNode *exprNode, BlockNode *_block) {
        cout << "WHile Node 1" << endl;
        cout << typeid(*exprNode).name() << endl;
        cond = (ExprBoolNode *) exprNode;
        block = _block;
    }


    virtual Value *codeGen(CodeGenContext &context);
};

class ForLoopNode : public StmtNode {
public:
    StmtNode *declaration;
    ExprNode *expr_dec;
    ExprNode *condition;
    ExprNode *progress;
    BlockNode *block;

    ForLoopNode(ExprNode *expr_dec, ExprNode *condition,
                ExprNode *progress, BlockNode *block) : expr_dec(
            expr_dec), condition(condition), progress(progress), block(block) {
        declaration=NULL;
    }

    ForLoopNode(StmtNode *declaration, ExprNode *condition,
                ExprNode *progress, BlockNode *block)
            : declaration(declaration), condition(condition),
              progress(progress), block(block) {
        expr_dec=NULL;
    }

    virtual Value *codeGen(CodeGenContext &context);

};

class FunctionDeclarationNode : public StmtNode {
public:
    bool isPtr = false;
    QualStorageTypeNode *storageType;
    const IdentiferNode &id;
    VariableList arguments;
    bool hasEllipsis = false;

    FunctionDeclarationNode(QualStorageTypeNode &type, ExprNode &assig) :
            id(*((NIdentifierParam *) &assig)->id),
            storageType(&type) {
        if (dynamic_cast<NIdentifierParam *>(&assig)) {
            cout << "This is NIdentifierParam" << endl;
            arguments = ((NIdentifierParam *) &assig)->arguments;
            isPtr = ((NIdentifierParam *) &assig)->isPtr;
            hasEllipsis = ((NIdentifierParam *) &assig)->ellipsis;

        } else {
            cout << "ERROR" << endl;
        }

        if (debug) {
            cout << "FD 3" << endl;
//            cout << arguments.front()->storageType->type.name << endl;
            cout << "Debug OK" << endl;
        }

    }

    virtual Value *codeGen(CodeGenContext &context);

};

class FunctionDefinitionNode : public StmtNode {
public:
    bool isPtr = false;
    const IdentiferNode &id;
    VariableList arguments;
    BlockNode &block;
    QualStorageTypeNode *storageType;
    bool hasEllipsis = false;

    FunctionDefinitionNode(QualStorageTypeNode &type, ExprNode &idm, BlockNode &block) :
            id(*((NIdentifierParam *) &idm)->id),
            arguments(((NIdentifierParam *) &idm)->arguments),
            block(block) {
        if (debug) {
            cout << "FDef 2" << endl;
        }
        storageType = &type;
        isPtr = ((NIdentifierParam *) &idm)->isPtr;
        hasEllipsis = ((NIdentifierParam *) &idm)->ellipsis;

    }

    virtual Value *codeGen(CodeGenContext &context);
};

class CHK_TYPE {
public:
    static bool isFunc(ExprNode &assig) {
        return ((CommonDeclarationNode *) &assig)->isFunc;
    }
};