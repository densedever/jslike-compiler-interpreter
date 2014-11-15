#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

#include "Interpreter.h"


Interpreter::Interpreter() {
	this->version = "0.0.1";
	this->prompt = "\nJS-" + this->version + "> ";
}
Interpreter::~Interpreter() {}

// I will put setters and getters here.

// setters and getters for string given to the REPL.
// the REPL isn't what will set the string, so
// getline() is used to prompt the user.
void	Interpreter::setInputString(void) {getline(cin, this->command);}
string	Interpreter::getInputString(void) {return this->command;}

// setters and getters for the REPL's prompt.
// setter not needed now, but might use later.
void	Interpreter::setPrompt(string p) {this->prompt = p;}
string	Interpreter::getPrompt(void) {return this->prompt;}


// the interpreter's member functions will go here.

// prompt the user to type some code in.
void Interpreter::promptUser(void)
{
	cout << getPrompt();
	cin.clear();
	getline(cin, this->command);
}

// the read-eval-print loop
void Interpreter::startREPL(void)
{
	while(true)
	{
		promptUser();
		if(getInputString().compare("exit") == 0) exit(0);
		else cout << "error: input not recognized." << endl;
	}
}

// split the user input into tokens.
// better to be put in another class?
void Interpreter::tokenizeUserInput(void)
{
}

