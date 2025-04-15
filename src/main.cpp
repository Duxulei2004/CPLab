#include <iostream>

// #include "antlr4-runtime.h"
#include "tree/ErrorNode.h"

#include "HelloLexer.h"
#include "HelloParser.h"
#include "HelloVisitor.h"
#include "Analysis.h"
using namespace antlr4;


//这部分转移到Analysis.h
// class Analysis : public HelloVisitor {
// public:
//     std::any visitR(HelloParser::RContext *context) {
//         visitChildren( context );
        
//         std::cout << "enter rule [r]!" << std::endl;
//         std::cout << "the ID is: " << context->ID()->getText().c_str() << std::endl;
//         return nullptr;
//     }

//     std::any visitErrorNode(tree::ErrorNode * node) override {
//         std::cout << "visit error node!" << std::endl;
//         return nullptr;
//     }
// };

// int main(int argc, const char* argv[]) {
//     if (argc != 2) {
//         return -1;
//     }
//   std::ifstream stream;
//   stream.open(argv[1]);

//   ANTLRInputStream   input(stream);
//   HelloLexer         lexer(&input);
//   CommonTokenStream  tokens(&lexer);
//   HelloParser        parser(&tokens);

//   Analysis visitor;
// //   visitor.visit( parser.r() );
//     std::cout << "Processing rule [s]:" << std::endl;
//     visitor.visit(parser.s());

//     std::cout << "Processing rule [r]:" << std::endl;
//     visitor.visit(parser.r());

//   return 0;
// }
int main(int argc, const char* argv[]) {
    if (argc != 2) {
        return -1;
    }
  std::ifstream stream;
  stream.open(argv[1]);

  ANTLRInputStream   input(stream);
  HelloLexer         lexer(&input);
  CommonTokenStream  tokens(&lexer);
  HelloParser        parser(&tokens);
  
  tree::ParseTree *tree = parser.compUnit();
  std::cout << "-------" << std::endl;
  std::cout << tree->toStringTree(&parser) << std::endl;
  Analysis listener;
  tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
  std::cout << "0" << std::endl;
  
  std::ofstream outfile("output.txt", std::ios::app); 
    if (outfile.is_open()) {
        outfile << "0" << std::endl;
        outfile.close();
    } else {
        std::cerr << "无法打开output.txt文件" << std::endl;
        return -1;
    }
  return 0;

}