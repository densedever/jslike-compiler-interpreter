#include <iostream>
#include <string>
using namespace std;

// g++ main.cpp -o jsi -Wall -std-c++11

// the class for tokenization and parsing of received strings
class Interpreter
{
    string version = "0.0.1";
    string prompt = version.append("JS-" + version + "> ");
    string command;
public:
    Interpreter() {}
    ~Interpreter() {}
    string getUserInput(void)
    {
        cin >> this->command;
        return command;
    }
    
    void tokenizeUserInput(void)
    {
        ;
    }
};

int main(int argc, char* argv[])
{
    Interpreter jsi;
    jsi.getUserInput();
    return 0;
}