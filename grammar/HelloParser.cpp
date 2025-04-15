
    #include <vector>


// Generated from ./Hello.g4 by ANTLR 4.13.1


#include "HelloVisitor.h"

#include "HelloParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct HelloParserStaticData final {
  HelloParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  HelloParserStaticData(const HelloParserStaticData&) = delete;
  HelloParserStaticData(HelloParserStaticData&&) = delete;
  HelloParserStaticData& operator=(const HelloParserStaticData&) = delete;
  HelloParserStaticData& operator=(HelloParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag helloParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
HelloParserStaticData *helloParserStaticData = nullptr;

void helloParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (helloParserStaticData != nullptr) {
    return;
  }
#else
  assert(helloParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<HelloParserStaticData>(
    std::vector<std::string>{
      "compUnit", "decl", "constdecl", "bType", "constDef", "constInitVal", 
      "vardecl", "varDefArray", "constInitValArray", "varDef", "funcDef", 
      "funcType", "funcFParams", "funcFParam", "block", "blockItem", "stmt", 
      "exp", "constExp", "cond", "lVal", "number", "funcRParams", "primaryExp", 
      "unaryExp", "mulExp", "addExp", "relExp", "eqExp", "lAndExp", "lOrExp"
    },
    std::vector<std::string>{
      "", "'const'", "'int'", "'double'", "'char'", "'float'", "'void'", 
      "'if'", "'else'", "'while'", "'break'", "'continue'", "'return'", 
      "'['", "']'", "'('", "')'", "'+'", "'-'", "'!'", "'*'", "'/'", "'%'", 
      "'<='", "'<'", "'>='", "'>'", "'=='", "'!='", "'&&'", "'||'", "';'", 
      "','", "'='", "'.'", "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "CONST_KW", "INT_KW", "DOUBLE_KW", "CHAR_KW", "FLOAT_KW", "VOID_KW", 
      "IF_KW", "ELSE_KW", "WHILE_KW", "BREAK_KW", "CONTINUE_KW", "RETURN_KW", 
      "LeftBracket", "RightBracket", "LeftParen", "RightParen", "Plus", 
      "Minus", "Not", "Star", "Div", "Mod", "LessEqual", "Less", "GreaterEqual", 
      "Greater", "Equal", "NotEqual", "AndAnd", "OrOr", "Semi", "Comma", 
      "Assign", "Dot", "LeftBrace", "RightBrace", "Ident", "IntConst", "HexadecConst", 
      "OctalConst", "DecimalConst", "FloatConst", "NewLine", "WhiteSpace", 
      "LineComment", "BlockComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,46,365,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,1,0,1,0,4,0,65,8,0,11,0,12,0,66,1,0,1,0,1,1,1,
  	1,3,1,73,8,1,1,2,1,2,1,2,1,2,1,2,5,2,80,8,2,10,2,12,2,83,9,2,1,2,1,2,
  	1,3,1,3,1,4,1,4,1,4,1,4,5,4,93,8,4,10,4,12,4,96,9,4,1,4,1,4,1,4,1,5,1,
  	5,1,5,1,5,1,5,5,5,106,8,5,10,5,12,5,109,9,5,3,5,111,8,5,1,5,3,5,114,8,
  	5,1,6,1,6,1,6,3,6,119,8,6,1,6,1,6,1,6,3,6,124,8,6,5,6,126,8,6,10,6,12,
  	6,129,9,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,140,8,7,10,7,12,7,143,
  	9,7,1,7,1,7,3,7,147,8,7,1,8,1,8,1,8,1,8,5,8,153,8,8,10,8,12,8,156,9,8,
  	3,8,158,8,8,1,8,1,8,1,9,1,9,1,9,3,9,165,8,9,1,10,1,10,1,10,1,10,3,10,
  	171,8,10,1,10,1,10,1,10,1,11,1,11,1,12,3,12,179,8,12,1,12,1,12,5,12,183,
  	8,12,10,12,12,12,186,9,12,1,13,1,13,1,13,1,13,3,13,192,8,13,1,13,1,13,
  	1,13,1,13,5,13,198,8,13,10,13,12,13,201,9,13,3,13,203,8,13,1,14,1,14,
  	5,14,207,8,14,10,14,12,14,210,9,14,1,14,1,14,1,15,1,15,3,15,216,8,15,
  	1,16,1,16,1,16,1,16,1,16,1,16,3,16,224,8,16,1,16,1,16,1,16,1,16,3,16,
  	230,8,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,240,8,16,1,16,1,
  	16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,252,8,16,1,17,1,17,1,
  	18,1,18,1,19,1,19,1,20,1,20,1,20,1,20,1,20,5,20,265,8,20,10,20,12,20,
  	268,9,20,1,21,1,21,1,22,1,22,1,22,5,22,275,8,22,10,22,12,22,278,9,22,
  	1,23,1,23,1,23,1,23,1,23,1,23,3,23,286,8,23,1,24,1,24,1,24,1,24,1,24,
  	1,24,3,24,294,8,24,1,24,3,24,297,8,24,1,25,1,25,1,25,1,25,1,25,1,25,5,
  	25,305,8,25,10,25,12,25,308,9,25,1,26,1,26,1,26,1,26,1,26,1,26,5,26,316,
  	8,26,10,26,12,26,319,9,26,1,27,1,27,1,27,1,27,1,27,1,27,5,27,327,8,27,
  	10,27,12,27,330,9,27,1,28,1,28,1,28,1,28,1,28,1,28,5,28,338,8,28,10,28,
  	12,28,341,9,28,1,29,1,29,1,29,1,29,1,29,1,29,5,29,349,8,29,10,29,12,29,
  	352,9,29,1,30,1,30,1,30,1,30,1,30,1,30,5,30,360,8,30,10,30,12,30,363,
  	9,30,1,30,0,6,50,52,54,56,58,60,31,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,0,8,2,0,2,2,4,5,
  	2,0,2,2,4,6,2,0,38,38,42,42,1,0,17,19,1,0,20,22,1,0,17,18,1,0,23,26,1,
  	0,27,28,380,0,64,1,0,0,0,2,72,1,0,0,0,4,74,1,0,0,0,6,86,1,0,0,0,8,88,
  	1,0,0,0,10,113,1,0,0,0,12,115,1,0,0,0,14,132,1,0,0,0,16,148,1,0,0,0,18,
  	161,1,0,0,0,20,166,1,0,0,0,22,175,1,0,0,0,24,178,1,0,0,0,26,187,1,0,0,
  	0,28,204,1,0,0,0,30,215,1,0,0,0,32,251,1,0,0,0,34,253,1,0,0,0,36,255,
  	1,0,0,0,38,257,1,0,0,0,40,259,1,0,0,0,42,269,1,0,0,0,44,271,1,0,0,0,46,
  	285,1,0,0,0,48,296,1,0,0,0,50,298,1,0,0,0,52,309,1,0,0,0,54,320,1,0,0,
  	0,56,331,1,0,0,0,58,342,1,0,0,0,60,353,1,0,0,0,62,65,3,2,1,0,63,65,3,
  	20,10,0,64,62,1,0,0,0,64,63,1,0,0,0,65,66,1,0,0,0,66,64,1,0,0,0,66,67,
  	1,0,0,0,67,68,1,0,0,0,68,69,5,0,0,1,69,1,1,0,0,0,70,73,3,4,2,0,71,73,
  	3,12,6,0,72,70,1,0,0,0,72,71,1,0,0,0,73,3,1,0,0,0,74,75,5,1,0,0,75,76,
  	3,6,3,0,76,81,3,8,4,0,77,78,5,32,0,0,78,80,3,8,4,0,79,77,1,0,0,0,80,83,
  	1,0,0,0,81,79,1,0,0,0,81,82,1,0,0,0,82,84,1,0,0,0,83,81,1,0,0,0,84,85,
  	5,31,0,0,85,5,1,0,0,0,86,87,7,0,0,0,87,7,1,0,0,0,88,94,5,37,0,0,89,90,
  	5,13,0,0,90,91,5,38,0,0,91,93,5,14,0,0,92,89,1,0,0,0,93,96,1,0,0,0,94,
  	92,1,0,0,0,94,95,1,0,0,0,95,97,1,0,0,0,96,94,1,0,0,0,97,98,5,33,0,0,98,
  	99,3,10,5,0,99,9,1,0,0,0,100,114,3,36,18,0,101,110,5,35,0,0,102,107,3,
  	10,5,0,103,104,5,32,0,0,104,106,3,10,5,0,105,103,1,0,0,0,106,109,1,0,
  	0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,110,
  	102,1,0,0,0,110,111,1,0,0,0,111,112,1,0,0,0,112,114,5,36,0,0,113,100,
  	1,0,0,0,113,101,1,0,0,0,114,11,1,0,0,0,115,118,3,6,3,0,116,119,3,18,9,
  	0,117,119,3,14,7,0,118,116,1,0,0,0,118,117,1,0,0,0,119,127,1,0,0,0,120,
  	123,5,32,0,0,121,124,3,18,9,0,122,124,3,14,7,0,123,121,1,0,0,0,123,122,
  	1,0,0,0,124,126,1,0,0,0,125,120,1,0,0,0,126,129,1,0,0,0,127,125,1,0,0,
  	0,127,128,1,0,0,0,128,130,1,0,0,0,129,127,1,0,0,0,130,131,5,31,0,0,131,
  	13,1,0,0,0,132,133,5,37,0,0,133,134,5,13,0,0,134,135,5,38,0,0,135,141,
  	5,14,0,0,136,137,5,13,0,0,137,138,5,38,0,0,138,140,5,14,0,0,139,136,1,
  	0,0,0,140,143,1,0,0,0,141,139,1,0,0,0,141,142,1,0,0,0,142,146,1,0,0,0,
  	143,141,1,0,0,0,144,145,5,33,0,0,145,147,3,16,8,0,146,144,1,0,0,0,146,
  	147,1,0,0,0,147,15,1,0,0,0,148,157,5,35,0,0,149,154,3,10,5,0,150,151,
  	5,32,0,0,151,153,3,10,5,0,152,150,1,0,0,0,153,156,1,0,0,0,154,152,1,0,
  	0,0,154,155,1,0,0,0,155,158,1,0,0,0,156,154,1,0,0,0,157,149,1,0,0,0,157,
  	158,1,0,0,0,158,159,1,0,0,0,159,160,5,36,0,0,160,17,1,0,0,0,161,164,5,
  	37,0,0,162,163,5,33,0,0,163,165,3,10,5,0,164,162,1,0,0,0,164,165,1,0,
  	0,0,165,19,1,0,0,0,166,167,3,22,11,0,167,168,5,37,0,0,168,170,5,15,0,
  	0,169,171,3,24,12,0,170,169,1,0,0,0,170,171,1,0,0,0,171,172,1,0,0,0,172,
  	173,5,16,0,0,173,174,3,28,14,0,174,21,1,0,0,0,175,176,7,1,0,0,176,23,
  	1,0,0,0,177,179,3,26,13,0,178,177,1,0,0,0,178,179,1,0,0,0,179,184,1,0,
  	0,0,180,181,5,32,0,0,181,183,3,26,13,0,182,180,1,0,0,0,183,186,1,0,0,
  	0,184,182,1,0,0,0,184,185,1,0,0,0,185,25,1,0,0,0,186,184,1,0,0,0,187,
  	188,3,6,3,0,188,202,5,37,0,0,189,191,5,13,0,0,190,192,5,38,0,0,191,190,
  	1,0,0,0,191,192,1,0,0,0,192,193,1,0,0,0,193,199,5,14,0,0,194,195,5,13,
  	0,0,195,196,5,38,0,0,196,198,5,14,0,0,197,194,1,0,0,0,198,201,1,0,0,0,
  	199,197,1,0,0,0,199,200,1,0,0,0,200,203,1,0,0,0,201,199,1,0,0,0,202,189,
  	1,0,0,0,202,203,1,0,0,0,203,27,1,0,0,0,204,208,5,35,0,0,205,207,3,30,
  	15,0,206,205,1,0,0,0,207,210,1,0,0,0,208,206,1,0,0,0,208,209,1,0,0,0,
  	209,211,1,0,0,0,210,208,1,0,0,0,211,212,5,36,0,0,212,29,1,0,0,0,213,216,
  	3,2,1,0,214,216,3,32,16,0,215,213,1,0,0,0,215,214,1,0,0,0,216,31,1,0,
  	0,0,217,218,3,40,20,0,218,219,5,33,0,0,219,220,3,34,17,0,220,221,5,31,
  	0,0,221,252,1,0,0,0,222,224,3,34,17,0,223,222,1,0,0,0,223,224,1,0,0,0,
  	224,225,1,0,0,0,225,252,5,31,0,0,226,252,3,28,14,0,227,229,5,12,0,0,228,
  	230,3,34,17,0,229,228,1,0,0,0,229,230,1,0,0,0,230,231,1,0,0,0,231,252,
  	5,31,0,0,232,233,5,7,0,0,233,234,5,15,0,0,234,235,3,38,19,0,235,236,5,
  	16,0,0,236,239,3,32,16,0,237,238,5,8,0,0,238,240,3,32,16,0,239,237,1,
  	0,0,0,239,240,1,0,0,0,240,252,1,0,0,0,241,242,5,9,0,0,242,243,5,15,0,
  	0,243,244,3,38,19,0,244,245,5,16,0,0,245,246,3,32,16,0,246,252,1,0,0,
  	0,247,248,5,10,0,0,248,252,5,31,0,0,249,250,5,11,0,0,250,252,5,31,0,0,
  	251,217,1,0,0,0,251,223,1,0,0,0,251,226,1,0,0,0,251,227,1,0,0,0,251,232,
  	1,0,0,0,251,241,1,0,0,0,251,247,1,0,0,0,251,249,1,0,0,0,252,33,1,0,0,
  	0,253,254,3,52,26,0,254,35,1,0,0,0,255,256,3,42,21,0,256,37,1,0,0,0,257,
  	258,3,60,30,0,258,39,1,0,0,0,259,266,5,37,0,0,260,261,5,13,0,0,261,262,
  	3,34,17,0,262,263,5,14,0,0,263,265,1,0,0,0,264,260,1,0,0,0,265,268,1,
  	0,0,0,266,264,1,0,0,0,266,267,1,0,0,0,267,41,1,0,0,0,268,266,1,0,0,0,
  	269,270,7,2,0,0,270,43,1,0,0,0,271,276,3,34,17,0,272,273,5,32,0,0,273,
  	275,3,34,17,0,274,272,1,0,0,0,275,278,1,0,0,0,276,274,1,0,0,0,276,277,
  	1,0,0,0,277,45,1,0,0,0,278,276,1,0,0,0,279,280,5,15,0,0,280,281,3,34,
  	17,0,281,282,5,16,0,0,282,286,1,0,0,0,283,286,3,40,20,0,284,286,3,42,
  	21,0,285,279,1,0,0,0,285,283,1,0,0,0,285,284,1,0,0,0,286,47,1,0,0,0,287,
  	297,3,46,23,0,288,289,7,3,0,0,289,297,3,48,24,0,290,291,5,37,0,0,291,
  	293,5,15,0,0,292,294,3,44,22,0,293,292,1,0,0,0,293,294,1,0,0,0,294,295,
  	1,0,0,0,295,297,5,16,0,0,296,287,1,0,0,0,296,288,1,0,0,0,296,290,1,0,
  	0,0,297,49,1,0,0,0,298,299,6,25,-1,0,299,300,3,48,24,0,300,306,1,0,0,
  	0,301,302,10,1,0,0,302,303,7,4,0,0,303,305,3,48,24,0,304,301,1,0,0,0,
  	305,308,1,0,0,0,306,304,1,0,0,0,306,307,1,0,0,0,307,51,1,0,0,0,308,306,
  	1,0,0,0,309,310,6,26,-1,0,310,311,3,50,25,0,311,317,1,0,0,0,312,313,10,
  	1,0,0,313,314,7,5,0,0,314,316,3,50,25,0,315,312,1,0,0,0,316,319,1,0,0,
  	0,317,315,1,0,0,0,317,318,1,0,0,0,318,53,1,0,0,0,319,317,1,0,0,0,320,
  	321,6,27,-1,0,321,322,3,52,26,0,322,328,1,0,0,0,323,324,10,1,0,0,324,
  	325,7,6,0,0,325,327,3,52,26,0,326,323,1,0,0,0,327,330,1,0,0,0,328,326,
  	1,0,0,0,328,329,1,0,0,0,329,55,1,0,0,0,330,328,1,0,0,0,331,332,6,28,-1,
  	0,332,333,3,54,27,0,333,339,1,0,0,0,334,335,10,1,0,0,335,336,7,7,0,0,
  	336,338,3,54,27,0,337,334,1,0,0,0,338,341,1,0,0,0,339,337,1,0,0,0,339,
  	340,1,0,0,0,340,57,1,0,0,0,341,339,1,0,0,0,342,343,6,29,-1,0,343,344,
  	3,56,28,0,344,350,1,0,0,0,345,346,10,1,0,0,346,347,5,29,0,0,347,349,3,
  	56,28,0,348,345,1,0,0,0,349,352,1,0,0,0,350,348,1,0,0,0,350,351,1,0,0,
  	0,351,59,1,0,0,0,352,350,1,0,0,0,353,354,6,30,-1,0,354,355,3,58,29,0,
  	355,361,1,0,0,0,356,357,10,1,0,0,357,358,5,30,0,0,358,360,3,58,29,0,359,
  	356,1,0,0,0,360,363,1,0,0,0,361,359,1,0,0,0,361,362,1,0,0,0,362,61,1,
  	0,0,0,363,361,1,0,0,0,39,64,66,72,81,94,107,110,113,118,123,127,141,146,
  	154,157,164,170,178,184,191,199,202,208,215,223,229,239,251,266,276,285,
  	293,296,306,317,328,339,350,361
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  helloParserStaticData = staticData.release();
}

}

HelloParser::HelloParser(TokenStream *input) : HelloParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

HelloParser::HelloParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  HelloParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *helloParserStaticData->atn, helloParserStaticData->decisionToDFA, helloParserStaticData->sharedContextCache, options);
}

HelloParser::~HelloParser() {
  delete _interpreter;
}

const atn::ATN& HelloParser::getATN() const {
  return *helloParserStaticData->atn;
}

std::string HelloParser::getGrammarFileName() const {
  return "Hello.g4";
}

const std::vector<std::string>& HelloParser::getRuleNames() const {
  return helloParserStaticData->ruleNames;
}

const dfa::Vocabulary& HelloParser::getVocabulary() const {
  return helloParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView HelloParser::getSerializedATN() const {
  return helloParserStaticData->serializedATN;
}


//----------------- CompUnitContext ------------------------------------------------------------------

HelloParser::CompUnitContext::CompUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::CompUnitContext::EOF() {
  return getToken(HelloParser::EOF, 0);
}

std::vector<HelloParser::DeclContext *> HelloParser::CompUnitContext::decl() {
  return getRuleContexts<HelloParser::DeclContext>();
}

HelloParser::DeclContext* HelloParser::CompUnitContext::decl(size_t i) {
  return getRuleContext<HelloParser::DeclContext>(i);
}

std::vector<HelloParser::FuncDefContext *> HelloParser::CompUnitContext::funcDef() {
  return getRuleContexts<HelloParser::FuncDefContext>();
}

HelloParser::FuncDefContext* HelloParser::CompUnitContext::funcDef(size_t i) {
  return getRuleContext<HelloParser::FuncDefContext>(i);
}


size_t HelloParser::CompUnitContext::getRuleIndex() const {
  return HelloParser::RuleCompUnit;
}


std::any HelloParser::CompUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitCompUnit(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::CompUnitContext* HelloParser::compUnit() {
  CompUnitContext *_localctx = _tracker.createInstance<CompUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, HelloParser::RuleCompUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(64);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(62);
        decl();
        break;
      }

      case 2: {
        setState(63);
        funcDef();
        break;
      }

      default:
        break;
      }
      setState(66); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 118) != 0));
    setState(68);
    match(HelloParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

HelloParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::ConstdeclContext* HelloParser::DeclContext::constdecl() {
  return getRuleContext<HelloParser::ConstdeclContext>(0);
}

HelloParser::VardeclContext* HelloParser::DeclContext::vardecl() {
  return getRuleContext<HelloParser::VardeclContext>(0);
}


size_t HelloParser::DeclContext::getRuleIndex() const {
  return HelloParser::RuleDecl;
}


std::any HelloParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::DeclContext* HelloParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 2, HelloParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(72);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HelloParser::CONST_KW: {
        enterOuterAlt(_localctx, 1);
        setState(70);
        constdecl();
        break;
      }

      case HelloParser::INT_KW:
      case HelloParser::CHAR_KW:
      case HelloParser::FLOAT_KW: {
        enterOuterAlt(_localctx, 2);
        setState(71);
        vardecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstdeclContext ------------------------------------------------------------------

HelloParser::ConstdeclContext::ConstdeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::ConstdeclContext::CONST_KW() {
  return getToken(HelloParser::CONST_KW, 0);
}

HelloParser::BTypeContext* HelloParser::ConstdeclContext::bType() {
  return getRuleContext<HelloParser::BTypeContext>(0);
}

std::vector<HelloParser::ConstDefContext *> HelloParser::ConstdeclContext::constDef() {
  return getRuleContexts<HelloParser::ConstDefContext>();
}

HelloParser::ConstDefContext* HelloParser::ConstdeclContext::constDef(size_t i) {
  return getRuleContext<HelloParser::ConstDefContext>(i);
}

tree::TerminalNode* HelloParser::ConstdeclContext::Semi() {
  return getToken(HelloParser::Semi, 0);
}

std::vector<tree::TerminalNode *> HelloParser::ConstdeclContext::Comma() {
  return getTokens(HelloParser::Comma);
}

tree::TerminalNode* HelloParser::ConstdeclContext::Comma(size_t i) {
  return getToken(HelloParser::Comma, i);
}


size_t HelloParser::ConstdeclContext::getRuleIndex() const {
  return HelloParser::RuleConstdecl;
}


std::any HelloParser::ConstdeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitConstdecl(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ConstdeclContext* HelloParser::constdecl() {
  ConstdeclContext *_localctx = _tracker.createInstance<ConstdeclContext>(_ctx, getState());
  enterRule(_localctx, 4, HelloParser::RuleConstdecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(HelloParser::CONST_KW);
    setState(75);
    bType();
    setState(76);
    constDef();
    setState(81);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HelloParser::Comma) {
      setState(77);
      match(HelloParser::Comma);
      setState(78);
      constDef();
      setState(83);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(84);
    match(HelloParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BTypeContext ------------------------------------------------------------------

HelloParser::BTypeContext::BTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::BTypeContext::INT_KW() {
  return getToken(HelloParser::INT_KW, 0);
}

tree::TerminalNode* HelloParser::BTypeContext::FLOAT_KW() {
  return getToken(HelloParser::FLOAT_KW, 0);
}

tree::TerminalNode* HelloParser::BTypeContext::CHAR_KW() {
  return getToken(HelloParser::CHAR_KW, 0);
}


size_t HelloParser::BTypeContext::getRuleIndex() const {
  return HelloParser::RuleBType;
}


std::any HelloParser::BTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitBType(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::BTypeContext* HelloParser::bType() {
  BTypeContext *_localctx = _tracker.createInstance<BTypeContext>(_ctx, getState());
  enterRule(_localctx, 6, HelloParser::RuleBType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 52) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDefContext ------------------------------------------------------------------

HelloParser::ConstDefContext::ConstDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::ConstDefContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

tree::TerminalNode* HelloParser::ConstDefContext::Assign() {
  return getToken(HelloParser::Assign, 0);
}

HelloParser::ConstInitValContext* HelloParser::ConstDefContext::constInitVal() {
  return getRuleContext<HelloParser::ConstInitValContext>(0);
}

std::vector<tree::TerminalNode *> HelloParser::ConstDefContext::LeftBracket() {
  return getTokens(HelloParser::LeftBracket);
}

tree::TerminalNode* HelloParser::ConstDefContext::LeftBracket(size_t i) {
  return getToken(HelloParser::LeftBracket, i);
}

std::vector<tree::TerminalNode *> HelloParser::ConstDefContext::IntConst() {
  return getTokens(HelloParser::IntConst);
}

tree::TerminalNode* HelloParser::ConstDefContext::IntConst(size_t i) {
  return getToken(HelloParser::IntConst, i);
}

std::vector<tree::TerminalNode *> HelloParser::ConstDefContext::RightBracket() {
  return getTokens(HelloParser::RightBracket);
}

tree::TerminalNode* HelloParser::ConstDefContext::RightBracket(size_t i) {
  return getToken(HelloParser::RightBracket, i);
}


size_t HelloParser::ConstDefContext::getRuleIndex() const {
  return HelloParser::RuleConstDef;
}


std::any HelloParser::ConstDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitConstDef(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ConstDefContext* HelloParser::constDef() {
  ConstDefContext *_localctx = _tracker.createInstance<ConstDefContext>(_ctx, getState());
  enterRule(_localctx, 8, HelloParser::RuleConstDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(HelloParser::Ident);
    setState(94);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HelloParser::LeftBracket) {
      setState(89);
      match(HelloParser::LeftBracket);
      setState(90);
      match(HelloParser::IntConst);
      setState(91);
      match(HelloParser::RightBracket);
      setState(96);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(97);
    match(HelloParser::Assign);
    setState(98);
    constInitVal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstInitValContext ------------------------------------------------------------------

HelloParser::ConstInitValContext::ConstInitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::ConstExpContext* HelloParser::ConstInitValContext::constExp() {
  return getRuleContext<HelloParser::ConstExpContext>(0);
}

tree::TerminalNode* HelloParser::ConstInitValContext::LeftBrace() {
  return getToken(HelloParser::LeftBrace, 0);
}

tree::TerminalNode* HelloParser::ConstInitValContext::RightBrace() {
  return getToken(HelloParser::RightBrace, 0);
}

std::vector<HelloParser::ConstInitValContext *> HelloParser::ConstInitValContext::constInitVal() {
  return getRuleContexts<HelloParser::ConstInitValContext>();
}

HelloParser::ConstInitValContext* HelloParser::ConstInitValContext::constInitVal(size_t i) {
  return getRuleContext<HelloParser::ConstInitValContext>(i);
}

std::vector<tree::TerminalNode *> HelloParser::ConstInitValContext::Comma() {
  return getTokens(HelloParser::Comma);
}

tree::TerminalNode* HelloParser::ConstInitValContext::Comma(size_t i) {
  return getToken(HelloParser::Comma, i);
}


size_t HelloParser::ConstInitValContext::getRuleIndex() const {
  return HelloParser::RuleConstInitVal;
}


std::any HelloParser::ConstInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitConstInitVal(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ConstInitValContext* HelloParser::constInitVal() {
  ConstInitValContext *_localctx = _tracker.createInstance<ConstInitValContext>(_ctx, getState());
  enterRule(_localctx, 10, HelloParser::RuleConstInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(113);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HelloParser::IntConst:
      case HelloParser::FloatConst: {
        enterOuterAlt(_localctx, 1);
        setState(100);
        constExp();
        break;
      }

      case HelloParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(101);
        match(HelloParser::LeftBrace);
        setState(110);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 4707284156416) != 0)) {
          setState(102);
          constInitVal();
          setState(107);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == HelloParser::Comma) {
            setState(103);
            match(HelloParser::Comma);
            setState(104);
            constInitVal();
            setState(109);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(112);
        match(HelloParser::RightBrace);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VardeclContext ------------------------------------------------------------------

HelloParser::VardeclContext::VardeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::BTypeContext* HelloParser::VardeclContext::bType() {
  return getRuleContext<HelloParser::BTypeContext>(0);
}

tree::TerminalNode* HelloParser::VardeclContext::Semi() {
  return getToken(HelloParser::Semi, 0);
}

std::vector<HelloParser::VarDefContext *> HelloParser::VardeclContext::varDef() {
  return getRuleContexts<HelloParser::VarDefContext>();
}

HelloParser::VarDefContext* HelloParser::VardeclContext::varDef(size_t i) {
  return getRuleContext<HelloParser::VarDefContext>(i);
}

std::vector<HelloParser::VarDefArrayContext *> HelloParser::VardeclContext::varDefArray() {
  return getRuleContexts<HelloParser::VarDefArrayContext>();
}

HelloParser::VarDefArrayContext* HelloParser::VardeclContext::varDefArray(size_t i) {
  return getRuleContext<HelloParser::VarDefArrayContext>(i);
}

std::vector<tree::TerminalNode *> HelloParser::VardeclContext::Comma() {
  return getTokens(HelloParser::Comma);
}

tree::TerminalNode* HelloParser::VardeclContext::Comma(size_t i) {
  return getToken(HelloParser::Comma, i);
}


size_t HelloParser::VardeclContext::getRuleIndex() const {
  return HelloParser::RuleVardecl;
}


std::any HelloParser::VardeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitVardecl(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::VardeclContext* HelloParser::vardecl() {
  VardeclContext *_localctx = _tracker.createInstance<VardeclContext>(_ctx, getState());
  enterRule(_localctx, 12, HelloParser::RuleVardecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    bType();
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(116);
      varDef();
      break;
    }

    case 2: {
      setState(117);
      varDefArray();
      break;
    }

    default:
      break;
    }
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HelloParser::Comma) {
      setState(120);
      match(HelloParser::Comma);
      setState(123);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(121);
        varDef();
        break;
      }

      case 2: {
        setState(122);
        varDefArray();
        break;
      }

      default:
        break;
      }
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(130);
    match(HelloParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefArrayContext ------------------------------------------------------------------

HelloParser::VarDefArrayContext::VarDefArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::VarDefArrayContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

std::vector<tree::TerminalNode *> HelloParser::VarDefArrayContext::LeftBracket() {
  return getTokens(HelloParser::LeftBracket);
}

tree::TerminalNode* HelloParser::VarDefArrayContext::LeftBracket(size_t i) {
  return getToken(HelloParser::LeftBracket, i);
}

std::vector<tree::TerminalNode *> HelloParser::VarDefArrayContext::IntConst() {
  return getTokens(HelloParser::IntConst);
}

tree::TerminalNode* HelloParser::VarDefArrayContext::IntConst(size_t i) {
  return getToken(HelloParser::IntConst, i);
}

std::vector<tree::TerminalNode *> HelloParser::VarDefArrayContext::RightBracket() {
  return getTokens(HelloParser::RightBracket);
}

tree::TerminalNode* HelloParser::VarDefArrayContext::RightBracket(size_t i) {
  return getToken(HelloParser::RightBracket, i);
}

tree::TerminalNode* HelloParser::VarDefArrayContext::Assign() {
  return getToken(HelloParser::Assign, 0);
}

HelloParser::ConstInitValArrayContext* HelloParser::VarDefArrayContext::constInitValArray() {
  return getRuleContext<HelloParser::ConstInitValArrayContext>(0);
}


size_t HelloParser::VarDefArrayContext::getRuleIndex() const {
  return HelloParser::RuleVarDefArray;
}


std::any HelloParser::VarDefArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitVarDefArray(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::VarDefArrayContext* HelloParser::varDefArray() {
  VarDefArrayContext *_localctx = _tracker.createInstance<VarDefArrayContext>(_ctx, getState());
  enterRule(_localctx, 14, HelloParser::RuleVarDefArray);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(HelloParser::Ident);
    setState(133);
    match(HelloParser::LeftBracket);
    setState(134);
    match(HelloParser::IntConst);
    setState(135);
    match(HelloParser::RightBracket);
    setState(141);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HelloParser::LeftBracket) {
      setState(136);
      match(HelloParser::LeftBracket);
      setState(137);
      match(HelloParser::IntConst);
      setState(138);
      match(HelloParser::RightBracket);
      setState(143);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HelloParser::Assign) {
      setState(144);
      match(HelloParser::Assign);
      setState(145);
      constInitValArray();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstInitValArrayContext ------------------------------------------------------------------

HelloParser::ConstInitValArrayContext::ConstInitValArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::ConstInitValArrayContext::LeftBrace() {
  return getToken(HelloParser::LeftBrace, 0);
}

tree::TerminalNode* HelloParser::ConstInitValArrayContext::RightBrace() {
  return getToken(HelloParser::RightBrace, 0);
}

std::vector<HelloParser::ConstInitValContext *> HelloParser::ConstInitValArrayContext::constInitVal() {
  return getRuleContexts<HelloParser::ConstInitValContext>();
}

HelloParser::ConstInitValContext* HelloParser::ConstInitValArrayContext::constInitVal(size_t i) {
  return getRuleContext<HelloParser::ConstInitValContext>(i);
}

std::vector<tree::TerminalNode *> HelloParser::ConstInitValArrayContext::Comma() {
  return getTokens(HelloParser::Comma);
}

tree::TerminalNode* HelloParser::ConstInitValArrayContext::Comma(size_t i) {
  return getToken(HelloParser::Comma, i);
}


size_t HelloParser::ConstInitValArrayContext::getRuleIndex() const {
  return HelloParser::RuleConstInitValArray;
}


std::any HelloParser::ConstInitValArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitConstInitValArray(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ConstInitValArrayContext* HelloParser::constInitValArray() {
  ConstInitValArrayContext *_localctx = _tracker.createInstance<ConstInitValArrayContext>(_ctx, getState());
  enterRule(_localctx, 16, HelloParser::RuleConstInitValArray);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(HelloParser::LeftBrace);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4707284156416) != 0)) {
      setState(149);
      constInitVal();
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == HelloParser::Comma) {
        setState(150);
        match(HelloParser::Comma);
        setState(151);
        constInitVal();
        setState(156);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(159);
    match(HelloParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefContext ------------------------------------------------------------------

HelloParser::VarDefContext::VarDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::VarDefContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

tree::TerminalNode* HelloParser::VarDefContext::Assign() {
  return getToken(HelloParser::Assign, 0);
}

HelloParser::ConstInitValContext* HelloParser::VarDefContext::constInitVal() {
  return getRuleContext<HelloParser::ConstInitValContext>(0);
}


size_t HelloParser::VarDefContext::getRuleIndex() const {
  return HelloParser::RuleVarDef;
}


std::any HelloParser::VarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitVarDef(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::VarDefContext* HelloParser::varDef() {
  VarDefContext *_localctx = _tracker.createInstance<VarDefContext>(_ctx, getState());
  enterRule(_localctx, 18, HelloParser::RuleVarDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(HelloParser::Ident);
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HelloParser::Assign) {
      setState(162);
      match(HelloParser::Assign);
      setState(163);
      constInitVal();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

HelloParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::FuncTypeContext* HelloParser::FuncDefContext::funcType() {
  return getRuleContext<HelloParser::FuncTypeContext>(0);
}

tree::TerminalNode* HelloParser::FuncDefContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

tree::TerminalNode* HelloParser::FuncDefContext::LeftParen() {
  return getToken(HelloParser::LeftParen, 0);
}

tree::TerminalNode* HelloParser::FuncDefContext::RightParen() {
  return getToken(HelloParser::RightParen, 0);
}

HelloParser::BlockContext* HelloParser::FuncDefContext::block() {
  return getRuleContext<HelloParser::BlockContext>(0);
}

HelloParser::FuncFParamsContext* HelloParser::FuncDefContext::funcFParams() {
  return getRuleContext<HelloParser::FuncFParamsContext>(0);
}


size_t HelloParser::FuncDefContext::getRuleIndex() const {
  return HelloParser::RuleFuncDef;
}


std::any HelloParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::FuncDefContext* HelloParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 20, HelloParser::RuleFuncDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    funcType();
    setState(167);
    match(HelloParser::Ident);
    setState(168);
    match(HelloParser::LeftParen);
    setState(170);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(169);
      funcFParams();
      break;
    }

    default:
      break;
    }
    setState(172);
    match(HelloParser::RightParen);
    setState(173);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncTypeContext ------------------------------------------------------------------

HelloParser::FuncTypeContext::FuncTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::FuncTypeContext::VOID_KW() {
  return getToken(HelloParser::VOID_KW, 0);
}

tree::TerminalNode* HelloParser::FuncTypeContext::INT_KW() {
  return getToken(HelloParser::INT_KW, 0);
}

tree::TerminalNode* HelloParser::FuncTypeContext::FLOAT_KW() {
  return getToken(HelloParser::FLOAT_KW, 0);
}

tree::TerminalNode* HelloParser::FuncTypeContext::CHAR_KW() {
  return getToken(HelloParser::CHAR_KW, 0);
}


size_t HelloParser::FuncTypeContext::getRuleIndex() const {
  return HelloParser::RuleFuncType;
}


std::any HelloParser::FuncTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitFuncType(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::FuncTypeContext* HelloParser::funcType() {
  FuncTypeContext *_localctx = _tracker.createInstance<FuncTypeContext>(_ctx, getState());
  enterRule(_localctx, 22, HelloParser::RuleFuncType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 116) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamsContext ------------------------------------------------------------------

HelloParser::FuncFParamsContext::FuncFParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HelloParser::FuncFParamContext *> HelloParser::FuncFParamsContext::funcFParam() {
  return getRuleContexts<HelloParser::FuncFParamContext>();
}

HelloParser::FuncFParamContext* HelloParser::FuncFParamsContext::funcFParam(size_t i) {
  return getRuleContext<HelloParser::FuncFParamContext>(i);
}

std::vector<tree::TerminalNode *> HelloParser::FuncFParamsContext::Comma() {
  return getTokens(HelloParser::Comma);
}

tree::TerminalNode* HelloParser::FuncFParamsContext::Comma(size_t i) {
  return getToken(HelloParser::Comma, i);
}


size_t HelloParser::FuncFParamsContext::getRuleIndex() const {
  return HelloParser::RuleFuncFParams;
}


std::any HelloParser::FuncFParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitFuncFParams(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::FuncFParamsContext* HelloParser::funcFParams() {
  FuncFParamsContext *_localctx = _tracker.createInstance<FuncFParamsContext>(_ctx, getState());
  enterRule(_localctx, 24, HelloParser::RuleFuncFParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 52) != 0)) {
      setState(177);
      funcFParam();
    }
    setState(184);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HelloParser::Comma) {
      setState(180);
      match(HelloParser::Comma);
      setState(181);
      funcFParam();
      setState(186);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamContext ------------------------------------------------------------------

HelloParser::FuncFParamContext::FuncFParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::BTypeContext* HelloParser::FuncFParamContext::bType() {
  return getRuleContext<HelloParser::BTypeContext>(0);
}

tree::TerminalNode* HelloParser::FuncFParamContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

std::vector<tree::TerminalNode *> HelloParser::FuncFParamContext::LeftBracket() {
  return getTokens(HelloParser::LeftBracket);
}

tree::TerminalNode* HelloParser::FuncFParamContext::LeftBracket(size_t i) {
  return getToken(HelloParser::LeftBracket, i);
}

std::vector<tree::TerminalNode *> HelloParser::FuncFParamContext::RightBracket() {
  return getTokens(HelloParser::RightBracket);
}

tree::TerminalNode* HelloParser::FuncFParamContext::RightBracket(size_t i) {
  return getToken(HelloParser::RightBracket, i);
}

std::vector<tree::TerminalNode *> HelloParser::FuncFParamContext::IntConst() {
  return getTokens(HelloParser::IntConst);
}

tree::TerminalNode* HelloParser::FuncFParamContext::IntConst(size_t i) {
  return getToken(HelloParser::IntConst, i);
}


size_t HelloParser::FuncFParamContext::getRuleIndex() const {
  return HelloParser::RuleFuncFParam;
}


std::any HelloParser::FuncFParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitFuncFParam(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::FuncFParamContext* HelloParser::funcFParam() {
  FuncFParamContext *_localctx = _tracker.createInstance<FuncFParamContext>(_ctx, getState());
  enterRule(_localctx, 26, HelloParser::RuleFuncFParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    bType();
    setState(188);
    match(HelloParser::Ident);
    setState(202);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HelloParser::LeftBracket) {
      setState(189);
      match(HelloParser::LeftBracket);
      setState(191);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HelloParser::IntConst) {
        setState(190);
        match(HelloParser::IntConst);
      }
      setState(193);
      match(HelloParser::RightBracket);
      setState(199);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == HelloParser::LeftBracket) {
        setState(194);
        match(HelloParser::LeftBracket);
        setState(195);
        match(HelloParser::IntConst);
        setState(196);
        match(HelloParser::RightBracket);
        setState(201);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

HelloParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::BlockContext::LeftBrace() {
  return getToken(HelloParser::LeftBrace, 0);
}

tree::TerminalNode* HelloParser::BlockContext::RightBrace() {
  return getToken(HelloParser::RightBrace, 0);
}

std::vector<HelloParser::BlockItemContext *> HelloParser::BlockContext::blockItem() {
  return getRuleContexts<HelloParser::BlockItemContext>();
}

HelloParser::BlockItemContext* HelloParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<HelloParser::BlockItemContext>(i);
}


size_t HelloParser::BlockContext::getRuleIndex() const {
  return HelloParser::RuleBlock;
}


std::any HelloParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::BlockContext* HelloParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 28, HelloParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(HelloParser::LeftBrace);
    setState(208);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4846871551670) != 0)) {
      setState(205);
      blockItem();
      setState(210);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(211);
    match(HelloParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

HelloParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::DeclContext* HelloParser::BlockItemContext::decl() {
  return getRuleContext<HelloParser::DeclContext>(0);
}

HelloParser::StmtContext* HelloParser::BlockItemContext::stmt() {
  return getRuleContext<HelloParser::StmtContext>(0);
}


size_t HelloParser::BlockItemContext::getRuleIndex() const {
  return HelloParser::RuleBlockItem;
}


std::any HelloParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::BlockItemContext* HelloParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 30, HelloParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(215);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HelloParser::CONST_KW:
      case HelloParser::INT_KW:
      case HelloParser::CHAR_KW:
      case HelloParser::FLOAT_KW: {
        enterOuterAlt(_localctx, 1);
        setState(213);
        decl();
        break;
      }

      case HelloParser::IF_KW:
      case HelloParser::WHILE_KW:
      case HelloParser::BREAK_KW:
      case HelloParser::CONTINUE_KW:
      case HelloParser::RETURN_KW:
      case HelloParser::LeftParen:
      case HelloParser::Plus:
      case HelloParser::Minus:
      case HelloParser::Not:
      case HelloParser::Semi:
      case HelloParser::LeftBrace:
      case HelloParser::Ident:
      case HelloParser::IntConst:
      case HelloParser::FloatConst: {
        enterOuterAlt(_localctx, 2);
        setState(214);
        stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

HelloParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::LValContext* HelloParser::StmtContext::lVal() {
  return getRuleContext<HelloParser::LValContext>(0);
}

tree::TerminalNode* HelloParser::StmtContext::Assign() {
  return getToken(HelloParser::Assign, 0);
}

HelloParser::ExpContext* HelloParser::StmtContext::exp() {
  return getRuleContext<HelloParser::ExpContext>(0);
}

tree::TerminalNode* HelloParser::StmtContext::Semi() {
  return getToken(HelloParser::Semi, 0);
}

HelloParser::BlockContext* HelloParser::StmtContext::block() {
  return getRuleContext<HelloParser::BlockContext>(0);
}

tree::TerminalNode* HelloParser::StmtContext::RETURN_KW() {
  return getToken(HelloParser::RETURN_KW, 0);
}

tree::TerminalNode* HelloParser::StmtContext::IF_KW() {
  return getToken(HelloParser::IF_KW, 0);
}

tree::TerminalNode* HelloParser::StmtContext::LeftParen() {
  return getToken(HelloParser::LeftParen, 0);
}

HelloParser::CondContext* HelloParser::StmtContext::cond() {
  return getRuleContext<HelloParser::CondContext>(0);
}

tree::TerminalNode* HelloParser::StmtContext::RightParen() {
  return getToken(HelloParser::RightParen, 0);
}

std::vector<HelloParser::StmtContext *> HelloParser::StmtContext::stmt() {
  return getRuleContexts<HelloParser::StmtContext>();
}

HelloParser::StmtContext* HelloParser::StmtContext::stmt(size_t i) {
  return getRuleContext<HelloParser::StmtContext>(i);
}

tree::TerminalNode* HelloParser::StmtContext::ELSE_KW() {
  return getToken(HelloParser::ELSE_KW, 0);
}

tree::TerminalNode* HelloParser::StmtContext::WHILE_KW() {
  return getToken(HelloParser::WHILE_KW, 0);
}

tree::TerminalNode* HelloParser::StmtContext::BREAK_KW() {
  return getToken(HelloParser::BREAK_KW, 0);
}

tree::TerminalNode* HelloParser::StmtContext::CONTINUE_KW() {
  return getToken(HelloParser::CONTINUE_KW, 0);
}


size_t HelloParser::StmtContext::getRuleIndex() const {
  return HelloParser::RuleStmt;
}


std::any HelloParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::StmtContext* HelloParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 32, HelloParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(251);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(217);
      lVal();
      setState(218);
      match(HelloParser::Assign);
      setState(219);
      exp();
      setState(220);
      match(HelloParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(223);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4810364321792) != 0)) {
        setState(222);
        exp();
      }
      setState(225);
      match(HelloParser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(226);
      block();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(227);
      match(HelloParser::RETURN_KW);
      setState(229);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4810364321792) != 0)) {
        setState(228);
        exp();
      }
      setState(231);
      match(HelloParser::Semi);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(232);
      match(HelloParser::IF_KW);
      setState(233);
      match(HelloParser::LeftParen);
      setState(234);
      cond();
      setState(235);
      match(HelloParser::RightParen);
      setState(236);
      stmt();
      setState(239);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
      case 1: {
        setState(237);
        match(HelloParser::ELSE_KW);
        setState(238);
        stmt();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(241);
      match(HelloParser::WHILE_KW);
      setState(242);
      match(HelloParser::LeftParen);
      setState(243);
      cond();
      setState(244);
      match(HelloParser::RightParen);
      setState(245);
      stmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(247);
      match(HelloParser::BREAK_KW);
      setState(248);
      match(HelloParser::Semi);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(249);
      match(HelloParser::CONTINUE_KW);
      setState(250);
      match(HelloParser::Semi);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

HelloParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::AddExpContext* HelloParser::ExpContext::addExp() {
  return getRuleContext<HelloParser::AddExpContext>(0);
}


size_t HelloParser::ExpContext::getRuleIndex() const {
  return HelloParser::RuleExp;
}


std::any HelloParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ExpContext* HelloParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 34, HelloParser::RuleExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    addExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstExpContext ------------------------------------------------------------------

HelloParser::ConstExpContext::ConstExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::NumberContext* HelloParser::ConstExpContext::number() {
  return getRuleContext<HelloParser::NumberContext>(0);
}


size_t HelloParser::ConstExpContext::getRuleIndex() const {
  return HelloParser::RuleConstExp;
}


std::any HelloParser::ConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitConstExp(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ConstExpContext* HelloParser::constExp() {
  ConstExpContext *_localctx = _tracker.createInstance<ConstExpContext>(_ctx, getState());
  enterRule(_localctx, 36, HelloParser::RuleConstExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

HelloParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::LOrExpContext* HelloParser::CondContext::lOrExp() {
  return getRuleContext<HelloParser::LOrExpContext>(0);
}


size_t HelloParser::CondContext::getRuleIndex() const {
  return HelloParser::RuleCond;
}


std::any HelloParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::CondContext* HelloParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 38, HelloParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    lOrExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LValContext ------------------------------------------------------------------

HelloParser::LValContext::LValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::LValContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

std::vector<tree::TerminalNode *> HelloParser::LValContext::LeftBracket() {
  return getTokens(HelloParser::LeftBracket);
}

tree::TerminalNode* HelloParser::LValContext::LeftBracket(size_t i) {
  return getToken(HelloParser::LeftBracket, i);
}

std::vector<HelloParser::ExpContext *> HelloParser::LValContext::exp() {
  return getRuleContexts<HelloParser::ExpContext>();
}

HelloParser::ExpContext* HelloParser::LValContext::exp(size_t i) {
  return getRuleContext<HelloParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> HelloParser::LValContext::RightBracket() {
  return getTokens(HelloParser::RightBracket);
}

tree::TerminalNode* HelloParser::LValContext::RightBracket(size_t i) {
  return getToken(HelloParser::RightBracket, i);
}


size_t HelloParser::LValContext::getRuleIndex() const {
  return HelloParser::RuleLVal;
}


std::any HelloParser::LValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitLVal(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::LValContext* HelloParser::lVal() {
  LValContext *_localctx = _tracker.createInstance<LValContext>(_ctx, getState());
  enterRule(_localctx, 40, HelloParser::RuleLVal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(259);
    match(HelloParser::Ident);
    setState(266);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(260);
        match(HelloParser::LeftBracket);
        setState(261);
        exp();
        setState(262);
        match(HelloParser::RightBracket); 
      }
      setState(268);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

HelloParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::NumberContext::IntConst() {
  return getToken(HelloParser::IntConst, 0);
}

tree::TerminalNode* HelloParser::NumberContext::FloatConst() {
  return getToken(HelloParser::FloatConst, 0);
}


size_t HelloParser::NumberContext::getRuleIndex() const {
  return HelloParser::RuleNumber;
}


std::any HelloParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::NumberContext* HelloParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 42, HelloParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    _la = _input->LA(1);
    if (!(_la == HelloParser::IntConst

    || _la == HelloParser::FloatConst)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncRParamsContext ------------------------------------------------------------------

HelloParser::FuncRParamsContext::FuncRParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HelloParser::ExpContext *> HelloParser::FuncRParamsContext::exp() {
  return getRuleContexts<HelloParser::ExpContext>();
}

HelloParser::ExpContext* HelloParser::FuncRParamsContext::exp(size_t i) {
  return getRuleContext<HelloParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> HelloParser::FuncRParamsContext::Comma() {
  return getTokens(HelloParser::Comma);
}

tree::TerminalNode* HelloParser::FuncRParamsContext::Comma(size_t i) {
  return getToken(HelloParser::Comma, i);
}


size_t HelloParser::FuncRParamsContext::getRuleIndex() const {
  return HelloParser::RuleFuncRParams;
}


std::any HelloParser::FuncRParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitFuncRParams(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::FuncRParamsContext* HelloParser::funcRParams() {
  FuncRParamsContext *_localctx = _tracker.createInstance<FuncRParamsContext>(_ctx, getState());
  enterRule(_localctx, 44, HelloParser::RuleFuncRParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    exp();
    setState(276);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HelloParser::Comma) {
      setState(272);
      match(HelloParser::Comma);
      setState(273);
      exp();
      setState(278);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpContext ------------------------------------------------------------------

HelloParser::PrimaryExpContext::PrimaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::PrimaryExpContext::LeftParen() {
  return getToken(HelloParser::LeftParen, 0);
}

HelloParser::ExpContext* HelloParser::PrimaryExpContext::exp() {
  return getRuleContext<HelloParser::ExpContext>(0);
}

tree::TerminalNode* HelloParser::PrimaryExpContext::RightParen() {
  return getToken(HelloParser::RightParen, 0);
}

HelloParser::LValContext* HelloParser::PrimaryExpContext::lVal() {
  return getRuleContext<HelloParser::LValContext>(0);
}

HelloParser::NumberContext* HelloParser::PrimaryExpContext::number() {
  return getRuleContext<HelloParser::NumberContext>(0);
}


size_t HelloParser::PrimaryExpContext::getRuleIndex() const {
  return HelloParser::RulePrimaryExp;
}


std::any HelloParser::PrimaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitPrimaryExp(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::PrimaryExpContext* HelloParser::primaryExp() {
  PrimaryExpContext *_localctx = _tracker.createInstance<PrimaryExpContext>(_ctx, getState());
  enterRule(_localctx, 46, HelloParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(285);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HelloParser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(279);
        match(HelloParser::LeftParen);
        setState(280);
        exp();
        setState(281);
        match(HelloParser::RightParen);
        break;
      }

      case HelloParser::Ident: {
        enterOuterAlt(_localctx, 2);
        setState(283);
        lVal();
        break;
      }

      case HelloParser::IntConst:
      case HelloParser::FloatConst: {
        enterOuterAlt(_localctx, 3);
        setState(284);
        number();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpContext ------------------------------------------------------------------

HelloParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::PrimaryExpContext* HelloParser::UnaryExpContext::primaryExp() {
  return getRuleContext<HelloParser::PrimaryExpContext>(0);
}

HelloParser::UnaryExpContext* HelloParser::UnaryExpContext::unaryExp() {
  return getRuleContext<HelloParser::UnaryExpContext>(0);
}

tree::TerminalNode* HelloParser::UnaryExpContext::Plus() {
  return getToken(HelloParser::Plus, 0);
}

tree::TerminalNode* HelloParser::UnaryExpContext::Minus() {
  return getToken(HelloParser::Minus, 0);
}

tree::TerminalNode* HelloParser::UnaryExpContext::Not() {
  return getToken(HelloParser::Not, 0);
}

tree::TerminalNode* HelloParser::UnaryExpContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

tree::TerminalNode* HelloParser::UnaryExpContext::LeftParen() {
  return getToken(HelloParser::LeftParen, 0);
}

tree::TerminalNode* HelloParser::UnaryExpContext::RightParen() {
  return getToken(HelloParser::RightParen, 0);
}

HelloParser::FuncRParamsContext* HelloParser::UnaryExpContext::funcRParams() {
  return getRuleContext<HelloParser::FuncRParamsContext>(0);
}


size_t HelloParser::UnaryExpContext::getRuleIndex() const {
  return HelloParser::RuleUnaryExp;
}


std::any HelloParser::UnaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitUnaryExp(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::UnaryExpContext* HelloParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 48, HelloParser::RuleUnaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(296);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(287);
      primaryExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(288);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 917504) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(289);
      unaryExp();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(290);
      match(HelloParser::Ident);
      setState(291);
      match(HelloParser::LeftParen);
      setState(293);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4810364321792) != 0)) {
        setState(292);
        funcRParams();
      }
      setState(295);
      match(HelloParser::RightParen);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExpContext ------------------------------------------------------------------

HelloParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::UnaryExpContext* HelloParser::MulExpContext::unaryExp() {
  return getRuleContext<HelloParser::UnaryExpContext>(0);
}

HelloParser::MulExpContext* HelloParser::MulExpContext::mulExp() {
  return getRuleContext<HelloParser::MulExpContext>(0);
}

tree::TerminalNode* HelloParser::MulExpContext::Star() {
  return getToken(HelloParser::Star, 0);
}

tree::TerminalNode* HelloParser::MulExpContext::Div() {
  return getToken(HelloParser::Div, 0);
}

tree::TerminalNode* HelloParser::MulExpContext::Mod() {
  return getToken(HelloParser::Mod, 0);
}


size_t HelloParser::MulExpContext::getRuleIndex() const {
  return HelloParser::RuleMulExp;
}


std::any HelloParser::MulExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitMulExp(this);
  else
    return visitor->visitChildren(this);
}


HelloParser::MulExpContext* HelloParser::mulExp() {
   return mulExp(0);
}

HelloParser::MulExpContext* HelloParser::mulExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HelloParser::MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, parentState);
  HelloParser::MulExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, HelloParser::RuleMulExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(299);
    unaryExp();
    _ctx->stop = _input->LT(-1);
    setState(306);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MulExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMulExp);
        setState(301);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(302);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 7340032) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(303);
        unaryExp(); 
      }
      setState(308);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AddExpContext ------------------------------------------------------------------

HelloParser::AddExpContext::AddExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::MulExpContext* HelloParser::AddExpContext::mulExp() {
  return getRuleContext<HelloParser::MulExpContext>(0);
}

HelloParser::AddExpContext* HelloParser::AddExpContext::addExp() {
  return getRuleContext<HelloParser::AddExpContext>(0);
}

tree::TerminalNode* HelloParser::AddExpContext::Plus() {
  return getToken(HelloParser::Plus, 0);
}

tree::TerminalNode* HelloParser::AddExpContext::Minus() {
  return getToken(HelloParser::Minus, 0);
}


size_t HelloParser::AddExpContext::getRuleIndex() const {
  return HelloParser::RuleAddExp;
}


std::any HelloParser::AddExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitAddExp(this);
  else
    return visitor->visitChildren(this);
}


HelloParser::AddExpContext* HelloParser::addExp() {
   return addExp(0);
}

HelloParser::AddExpContext* HelloParser::addExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HelloParser::AddExpContext *_localctx = _tracker.createInstance<AddExpContext>(_ctx, parentState);
  HelloParser::AddExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, HelloParser::RuleAddExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(310);
    mulExp(0);
    _ctx->stop = _input->LT(-1);
    setState(317);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AddExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAddExp);
        setState(312);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(313);
        _la = _input->LA(1);
        if (!(_la == HelloParser::Plus

        || _la == HelloParser::Minus)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(314);
        mulExp(0); 
      }
      setState(319);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelExpContext ------------------------------------------------------------------

HelloParser::RelExpContext::RelExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::AddExpContext* HelloParser::RelExpContext::addExp() {
  return getRuleContext<HelloParser::AddExpContext>(0);
}

HelloParser::RelExpContext* HelloParser::RelExpContext::relExp() {
  return getRuleContext<HelloParser::RelExpContext>(0);
}

tree::TerminalNode* HelloParser::RelExpContext::Less() {
  return getToken(HelloParser::Less, 0);
}

tree::TerminalNode* HelloParser::RelExpContext::Greater() {
  return getToken(HelloParser::Greater, 0);
}

tree::TerminalNode* HelloParser::RelExpContext::LessEqual() {
  return getToken(HelloParser::LessEqual, 0);
}

tree::TerminalNode* HelloParser::RelExpContext::GreaterEqual() {
  return getToken(HelloParser::GreaterEqual, 0);
}


size_t HelloParser::RelExpContext::getRuleIndex() const {
  return HelloParser::RuleRelExp;
}


std::any HelloParser::RelExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitRelExp(this);
  else
    return visitor->visitChildren(this);
}


HelloParser::RelExpContext* HelloParser::relExp() {
   return relExp(0);
}

HelloParser::RelExpContext* HelloParser::relExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HelloParser::RelExpContext *_localctx = _tracker.createInstance<RelExpContext>(_ctx, parentState);
  HelloParser::RelExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, HelloParser::RuleRelExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(321);
    addExp(0);
    _ctx->stop = _input->LT(-1);
    setState(328);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<RelExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleRelExp);
        setState(323);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(324);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 125829120) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(325);
        addExp(0); 
      }
      setState(330);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqExpContext ------------------------------------------------------------------

HelloParser::EqExpContext::EqExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::RelExpContext* HelloParser::EqExpContext::relExp() {
  return getRuleContext<HelloParser::RelExpContext>(0);
}

HelloParser::EqExpContext* HelloParser::EqExpContext::eqExp() {
  return getRuleContext<HelloParser::EqExpContext>(0);
}

tree::TerminalNode* HelloParser::EqExpContext::Equal() {
  return getToken(HelloParser::Equal, 0);
}

tree::TerminalNode* HelloParser::EqExpContext::NotEqual() {
  return getToken(HelloParser::NotEqual, 0);
}


size_t HelloParser::EqExpContext::getRuleIndex() const {
  return HelloParser::RuleEqExp;
}


std::any HelloParser::EqExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitEqExp(this);
  else
    return visitor->visitChildren(this);
}


HelloParser::EqExpContext* HelloParser::eqExp() {
   return eqExp(0);
}

HelloParser::EqExpContext* HelloParser::eqExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HelloParser::EqExpContext *_localctx = _tracker.createInstance<EqExpContext>(_ctx, parentState);
  HelloParser::EqExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, HelloParser::RuleEqExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(332);
    relExp(0);
    _ctx->stop = _input->LT(-1);
    setState(339);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EqExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEqExp);
        setState(334);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(335);
        _la = _input->LA(1);
        if (!(_la == HelloParser::Equal

        || _la == HelloParser::NotEqual)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(336);
        relExp(0); 
      }
      setState(341);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LAndExpContext ------------------------------------------------------------------

HelloParser::LAndExpContext::LAndExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::EqExpContext* HelloParser::LAndExpContext::eqExp() {
  return getRuleContext<HelloParser::EqExpContext>(0);
}

HelloParser::LAndExpContext* HelloParser::LAndExpContext::lAndExp() {
  return getRuleContext<HelloParser::LAndExpContext>(0);
}

tree::TerminalNode* HelloParser::LAndExpContext::AndAnd() {
  return getToken(HelloParser::AndAnd, 0);
}


size_t HelloParser::LAndExpContext::getRuleIndex() const {
  return HelloParser::RuleLAndExp;
}


std::any HelloParser::LAndExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitLAndExp(this);
  else
    return visitor->visitChildren(this);
}


HelloParser::LAndExpContext* HelloParser::lAndExp() {
   return lAndExp(0);
}

HelloParser::LAndExpContext* HelloParser::lAndExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HelloParser::LAndExpContext *_localctx = _tracker.createInstance<LAndExpContext>(_ctx, parentState);
  HelloParser::LAndExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, HelloParser::RuleLAndExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(343);
    eqExp(0);
    _ctx->stop = _input->LT(-1);
    setState(350);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LAndExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLAndExp);
        setState(345);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(346);
        match(HelloParser::AndAnd);
        setState(347);
        eqExp(0); 
      }
      setState(352);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LOrExpContext ------------------------------------------------------------------

HelloParser::LOrExpContext::LOrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::LAndExpContext* HelloParser::LOrExpContext::lAndExp() {
  return getRuleContext<HelloParser::LAndExpContext>(0);
}

HelloParser::LOrExpContext* HelloParser::LOrExpContext::lOrExp() {
  return getRuleContext<HelloParser::LOrExpContext>(0);
}

tree::TerminalNode* HelloParser::LOrExpContext::OrOr() {
  return getToken(HelloParser::OrOr, 0);
}


size_t HelloParser::LOrExpContext::getRuleIndex() const {
  return HelloParser::RuleLOrExp;
}


std::any HelloParser::LOrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitLOrExp(this);
  else
    return visitor->visitChildren(this);
}


HelloParser::LOrExpContext* HelloParser::lOrExp() {
   return lOrExp(0);
}

HelloParser::LOrExpContext* HelloParser::lOrExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HelloParser::LOrExpContext *_localctx = _tracker.createInstance<LOrExpContext>(_ctx, parentState);
  HelloParser::LOrExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, HelloParser::RuleLOrExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(354);
    lAndExp(0);
    _ctx->stop = _input->LT(-1);
    setState(361);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LOrExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLOrExp);
        setState(356);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(357);
        match(HelloParser::OrOr);
        setState(358);
        lAndExp(0); 
      }
      setState(363);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool HelloParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 25: return mulExpSempred(antlrcpp::downCast<MulExpContext *>(context), predicateIndex);
    case 26: return addExpSempred(antlrcpp::downCast<AddExpContext *>(context), predicateIndex);
    case 27: return relExpSempred(antlrcpp::downCast<RelExpContext *>(context), predicateIndex);
    case 28: return eqExpSempred(antlrcpp::downCast<EqExpContext *>(context), predicateIndex);
    case 29: return lAndExpSempred(antlrcpp::downCast<LAndExpContext *>(context), predicateIndex);
    case 30: return lOrExpSempred(antlrcpp::downCast<LOrExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool HelloParser::mulExpSempred(MulExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool HelloParser::addExpSempred(AddExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool HelloParser::relExpSempred(RelExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool HelloParser::eqExpSempred(EqExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool HelloParser::lAndExpSempred(LAndExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool HelloParser::lOrExpSempred(LOrExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void HelloParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  helloParserInitialize();
#else
  ::antlr4::internal::call_once(helloParserOnceFlag, helloParserInitialize);
#endif
}
