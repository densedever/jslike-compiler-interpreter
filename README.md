jslike-compiler-interpreter
===========================

A compiler/interpreter for a JavaScript-like language for native desktop applications.

#Goal: 

Make a JS compiler for desktop applications and general programming, as opposed to only making web apps. 
IronJS is an ECMAScript implementation that runs on the .NET framework, but I want something that compiles to native code 
and actually addresses and fixes the problems that the JavaScript language itself has.

#Relevant links:

[JavaScript Wiki](http://en.wikipedia.org/wiki/JavaScript)
[Guide to JavaScript](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide)
[JavaScript Reference](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference)
[JavaScript's Quirks](http://ironjs.wordpress.com/2011/06/22/my-gripes-with-javascript/)
[More JS Quirks](http://wtfjs.com/)
[JS Misconceptions](http://www.crockford.com/javascript/javascript.html)
[ECMAScript-262 Standard](http://www.ecma-international.org/publications/files/ECMA-ST/Ecma-262.pdf)
[JS Language Resources](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Language_Resources)
[Lecture on Compiler Design](https://www.youtube.com/watch?v=WccZQSERfCM&index=2&list=PLEbnTDJUr_IcPtUXFy2b1sGRPsLFMghhS)
[Lecture on Compilers](https://www.youtube.com/watch?v=h7GQzQYBW1A&list=PLDAE55AEE0731D729)

#Anatomy:

- A command line compiler taking a file name as an argument and returning a binary file as output.
- A REPL capable of loading code files.

#Features of the language:

- Prototype-oriented, with support for functional programming, branching off of the ECMAScript standards and fixing the major problems with the JS language itself.
- Needs support for low-level programming and file manipulation. 

#What knowledge is needed:

- Strong knowledge of C++ and Javascript.
- Knowledge of the API’s of different OS’s that could help make the code portable.

#Bird’s-eye view:

JS -> Preprocessing (preprocessed code)
-> Lexical Analysis (token stream)
-> Syntax Analysis (parse tree)
-> Semantic Analysis (semantical parse tree)
-> Intermediate code (three-address code)
-> Optimization (optimized three-address code)
-> Target code generation
