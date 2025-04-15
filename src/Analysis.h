#include <iostream>

// #include "antlr4-runtime.h"
#include "tree/ErrorNode.h"

#include "HelloLexer.h"
#include "HelloParser.h"
#include "HelloVisitor.h"

using namespace antlr4;
// class Analysis : public HelloVisitor {
// public:
//     std::any visitR(HelloParser::RContext *context) override {
//         std::cout << "enter rule [r]!" << std::endl;
//         if (context->ID()) { 
//             std::cout << "the ID is: " << context->ID()->getText() << std::endl;
//         } else {
//             std::cerr << "Error: visitS() -> ID() is null" << std::endl;
//         }
//         return nullptr;
//     }

//     std::any visitS(HelloParser::SContext *context) override {
//         std::cout << "enter rule [s]!" << std::endl;
        
//         if (context->ID()) { 
//             std::cout << "the ID is: " << context->ID()->getText() << std::endl;
//         } else {
//             std::cerr << "Error: visitS() -> ID() is null" << std::endl;
//         }
        
//         return nullptr;
//     }
//     std::any visitErrorNode(tree::ErrorNode *node) override {
//         std::cout << "visit error node!" << std::endl;
//         return nullptr;
//     }
// };

class Analysis : public antlr4::tree::ParseTreeListener {
public:
    virtual void enterEveryRule(ParserRuleContext* ctx) override {}
    virtual void visitTerminal(tree::TerminalNode* node) override {}
    virtual void visitErrorNode(tree::ErrorNode* node) override {
        std::cout << "1" << std::endl;
        std::ofstream outfile("output.txt", std::ios::app); 
        if (outfile.is_open()) {
            outfile << "1" << std::endl;
            outfile.close();
        } else {
            std::cerr << "无法打开output.txt文件" << std::endl;
        }
        exit(1);}
    virtual void exitEveryRule(ParserRuleContext* ctx) override {}
};
