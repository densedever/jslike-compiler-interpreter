#include <iostream>
#include <cstring>
#include <vector>

#include "Lexer.h"

using namespace std;

Lexer::Lexer() {}
Lexer::~Lexer() {}

//string substr (size_t pos = 0, size_t len = npos) const;
// splits the string into tokens
string Lexer::tokenizeInputString(string s)
{
	int marker = 0; // marks current string pos 
	bool inComment = false;
	vector<string> tokens; // the array to dump tokens in
	vector<int> lineSplits(s.length()); // end of tokens in string
	
	for(unsigned int c = 0; c < s.length(); c++)
	{
		if(s[c] == ' ') {
			marker++; 
			continue;
		}
		// checking for comments. "//" is a single-line comment
		else if(s[c] == '/' && s[c+1] == '/' && !inComment) {
			inComment = true;
		}
		else if(s[c] == '\n' && inComment) {
			inComment = false;
		}
		// split string
		// identify starting and ending points of tokens
		// cut those out beginning-to-end into tokens vector
		marker++;
		// UNFINISHED
		// warning: no return statement in method returning non-void
	}
}

void Lexer::deriveSyntaxTree(string s)
{
	
}

/*
syntax tree:

	- These are the legal grammatical constructions. 
	- Anything that doesn't fit these templates is illegal.
	- Whitespace will be ignored.

var = variable
num = number
type = data type
expr = expression
stmt = statement
op = operator
rop = relational operator
{ = begin block
} = end block
( = begin paren
) = end paren
func = function
block = code block

Expressions:
	Arithmetic:
		num op num
		var op num
		var op var
		num op var
		num op func
		var op func
		func op var
		func op num
		func op func

	Assignment:
		type var;
		type var = expr;
		var = expr;

	Equality:
		var == num
		num == var
		var == var
		num == num

	Conditionals:
		if(expr) { block }
		if(rop expr) { block }
		if(expr) stmt;
		if(rop expr) stmt;
		if(expr) { block } else { block }
		if(expr) stmt; else stmt;
		
	Function calls:
		
Statements:


*/
