
    #include <vector>


// Generated from ./Hello.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CACTLexer : public antlr4::Lexer {
public:
  enum {
    LeftParen = 1, RightParen = 2, LeftBracket = 3, RightBracket = 4, LeftBrace = 5, 
    RightBrace = 6, SEMICOLON = 7, COMMA = 8, CONST = 9, VOID = 10, INT = 11, 
    BOOL = 12, FLOAT = 13, DOUBLE = 14, IF = 15, ELSE = 16, WHILE = 17, 
    BREAK = 18, CONTINUE = 19, RETURN = 20, ASSIGN = 21, POS_ADD = 22, NEG_SUB = 23, 
    NOT = 24, MUL = 25, DIV = 26, MOD = 27, LEQ = 28, GEQ = 29, LT = 30, 
    GT = 31, EQ = 32, NEQ = 33, AND = 34, OR = 35, BoolConst = 36, Ident = 37, 
    IntConst = 38, FloatConst = 39, DoubleConst = 40, NewLine = 41, WhiteSpace = 42, 
    LineComment = 43, BlockComment = 44
  };

  explicit CACTLexer(antlr4::CharStream *input);

  ~CACTLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

