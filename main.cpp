#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

#include "Interpreter.cpp"

// g++ main.cpp -o jsi -Wall -std-c++11

int main()
{
    Interpreter jsi;
    jsi.startREPL();
    return 0;
}
