#ifndef SYN_H
#define SYN_H

#include <iostream>
#include <fstream>
#include "CodeGenerator.h"

using namespace std;

/* Purpose of these is to map the 
 * functions to the correct column
 * in the syntactical table. */
enum functionRuleNumberMapping {
    PROGRAM_F,
    MORE_DEFINES_F,
    DEFINE_F,
    STMT_LIST_F,
    STMT_F,
    LITERAL_F,
    QUOTED_LIT_F,
    MORE_TOKENS_F,
    PARAM_LIST_F,
    ELSE_PART_F,
    STMT_PAIR_F,
    STMT_PAIR_BODY_F,
    ACTION_F,
    ANY_OTHER_TOKEN_F,
};

/* A token value doesnt directly map
 * to its repective value in the table 
 * the job of these enums is to map token
 * values to their correct rows in
 * the table. */
enum tokenMapper {
    LPAREN_M, 
    EOF_M,
    IDENT_M,
    RPAREN_M,
    DEFINE_M,
    NUMLIT_M,
    STRLIT_M,
    SQUOTE_M,
    ELSE_M,
    IF_M,
    COND_M,
    LISTOP_M,
    CONS_M,
    AND_M,
    OR_M,
    NOT_M,
    NUMBERP_M,
    LISTP_M,
    ZEROP_M,
    NULLP_M,
    STRINGP_M,
    PLUS_M,
    MINUS_M,
    DIV_M,
    MULT_M,
    MODULO_M,
    ROUND_M,
    EQUALTO_M,
    GT_M,
    LT_M,
    GTE_M,
    LTE_M,
    DISPLAY_M,
    NEWLINE_M,
};

class SyntacticalAnalyzer 
{
    public:
	SyntacticalAnalyzer (char * filename);
	~SyntacticalAnalyzer ();
    // TODO: Is this ok?
    int GetErrs() { return totalErrs; }

    private:
    int totalErrs;
	LexicalAnalyzer * lex;
    CodeGen * codeGen;
	token_type token;
    ofstream p2file;
    string lexeme;
    bool no_return; // 10/10 name

    /* Token mapper */
    map <token_type, tokenMapper> row; 

    /* Transition functions */
    int program(string pass);
    int more_defines(string pass);
    int define(string pass);
    int stmt_list(string pass);
    int stmt(string pass);
    int literal(string pass);
    int quoted_lit(string pass);
    int more_tokens(string pass);
    int param_list(string pass);
    int else_part(string pass);
    int stmt_pair(string pass);
    int stmt_pair_body(string pass);
    int action(string pass);
    int any_other_token(string pass, bool prevCalled=false);

    /* Helper functions */
    void writeLstExpected(const token_type token);
    void writeLstUnexpected();
	void printP2File(const string &functionName, const string &tokenName, const string &lex);
    void printP2FileUsing(const string &ruleNumber);
    void printP2Exiting(const string &funkyName, const string &token);
    bool isValidToken(functionRuleNumberMapping fMap);
    void validateToken(functionRuleNumberMapping fMap);
        
    /* Helper functions - CodeGen */
    void GetTokLex();
    void PLUS();
    void arithmetic();
    string arith_helper();
    
    /* Debugging */
	void Debug(string functionName);
	template<typename A> void PrintQ(A q);
};
	
#endif
