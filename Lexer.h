#ifndef LEXER_H
#define LEXER_H

#include <iostream>
#include <cstring>

#ifndef INTERPRETER_H
#include "Interpreter.h"
#endif

// parses a string from the interpreter
class Lexer : public Interpreter // error: expected class name before '{'
{
	// sets of tokens for ast
public:
	Lexer();
	~Lexer();
	
	string tokenizeInputString(string);
    void deriveSyntaxTree(string);
};

#endif
