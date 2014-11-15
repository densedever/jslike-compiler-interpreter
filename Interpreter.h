#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <string>
using namespace std;

// the general class for the interpreter itself
class Interpreter
{
	string version;
	string prompt;
	string command;
public:
	Interpreter();
	~Interpreter();
	
	void setInputString(void);
	string getInputString(void);
	
	void setPrompt(string);
	string getPrompt(void);
	
	void promptUser(void);
	void startREPL(void);
	void tokenizeUserInput(void);
};

#endif
