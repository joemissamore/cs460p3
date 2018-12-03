#ifndef CG_H
#define CG_H

#include <iostream>
#include <fstream>
#include <queue>
#include "LexicalAnalyzer.h"

using namespace std;

class CodeGen 
{
    public:
	CodeGen (string filename, LexicalAnalyzer * L);
	~CodeGen ();
	void WriteCode (int tabs, string code);
	
    private:
	LexicalAnalyzer * lex;
	ofstream cpp;

	/* */
	token_type token;
	string lexeme; 

	/* Transition functions */
	void Define();
	void Param_List();
	void Stmt();
	void Literal();
	void Action();
	void Stmt_List();

	/* Actions */
	void PLUS();

	/* Helper Functions */
	void ParseCode();
	void AdvanceTokenTo(token_type t);
	void GetTokLex();

	/* Debugging */
	void Debug(string functionName);
	template<typename A> void PrintQ(A q);
};
	
#endif
