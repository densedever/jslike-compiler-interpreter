jslike-compiler-interpreter
===========================

A compiler/interpreter for a JavaScript-like language for native desktop applications.

##Goal: 

Make a JS compiler for desktop applications and general programming, as opposed to only making web apps. 
IronJS is an ECMAScript implementation that runs on the .NET framework, but I want something that compiles to native code 
and actually addresses and fixes the problems that the JavaScript language itself has.

##Relevant links:

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
[Helpful Suggestions for Desktop Compatibility](http://programmers.stackexchange.com/questions/83399/why-isnt-html-css-and-js-used-for-desktop-apps)

##Anatomy:

- A command line compiler taking a file name as an argument and returning a binary file as output.
- A REPL capable of interactive code interpretation, running scripts, and loading code files. Allows for dynamic testing of code such as what Common Lisp is capable of.

##Features of the language:

- Prototype-oriented, with support for functional programming, branching off of the ECMAScript standards and fixing the major problems with the JS language itself.
- Needs support for low-level programming and file manipulation. 
- First-class functions. Functions are just another data type and can be returned, taken as function input, assigned to a variable, anything. If the function doesn’t explicitly return something, it returns null.
- Static scoping. Each block has its own variables and shares no variables with any other block except through data passing via function arguments. Subject to change.

##What the language looks like:

####Assignment:
- type name;
- name = expr;
- type name = expr;
- type name = function (arg list) { block; }
- assignment without prior declaration is illegal.

####Data Types:
- int (8 bytes)
- short (4 bytes)
- word (2 bytes)
- byte (1 byte)
- string (std::string)
- float (4 bytes floating-point)
- double (8 bytes floating-point)
- function (void *)
- bool (bool: true or false)
- null ((void *) 0x0)
- “true” is defined as true (bool).
- “false” is defined as false (bool) or null. Numbers are just numbers. Subject to change.
- array / list will have its own [Array object](http://www.w3schools.com/jsref/jsref_obj_array.asp).

####Math operators:
- addition (+)
- subtraction (-)
- multiplication (*)
- division (/)
- modulo (%)
- forced evaluation (())
- other operators provided with generic [Math class](http://www.w3schools.com/jsref/jsref_obj_math.asp).

####Relational operators:
- numerical equality (==)
- resides in same memory location (@)
- less than (<)
- greater than (>)
- less than or equal (<=)
- greater than or equal (>=)
- not equal (!=)

####Logical operators:

- and (&&)
- or (||)
- xor (^^)
- not (!)

####Bitwise operators:

- and (&)
- or (|)
- xor (^)
- not (~)

####String operators: unfinished

- concatenation
- equality

####Conditionals:

- if/else (C syntax)

####Loops:

- while
- for / in (for(start; stop; step), for(i in itr))

####Core classes: unfinished

##What knowledge is needed:

- Strong knowledge of C++ and Javascript, and prototype-oriented/functional programming concepts.
- Knowledge of the API’s of different OS’s that could help make the code portable.

##Bird’s-eye view of the software: (input -> output (output form))

JS -> Preprocessing (preprocessed code)
-> Lexical Analysis (token stream)
-> Syntax Analysis (parse tree)
-> Semantic Analysis (semantical parse tree)
-> Intermediate code (three-address code)
-> Optimization (optimized three-address code)
-> Target code generation

##Plan of attack:

- make a tokenizer and a lexer that breaks down the string and makes syntax trees from the grammar
- make a [standard](http://learnjavascript.co.uk/jsbasics/anatomyjs.html) [library](http://archive.oreilly.com/pub/a/javascript/excerpts/javascript-tdg/core-javascript-reference.html) for the language, starting with some basic data types and simple console I/O.

