#include <iostream>
using namespace std;

class Interpreter
{
    string version = "0.0.1";
    string prompt = version.append("JS-" + version + "> ");
    string command;
public:
    Interpreter() {}
    ~Interpreter() {}
    string getUserInput()
    {
        cin >> this->command;
        return command;
    }
    
    void tokenizeUserInput()
    {
        ;
    }
};

int main()
{
    Interpreter jsi;
    jsi.getUserInput();
    return 0;
}