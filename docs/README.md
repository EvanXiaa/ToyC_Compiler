## Branch Status


Name| Description | Status
---------|----------|---------
 Master| Compiler Assignment | Working
 Glamdring | Galmdring Implementation | Working

Name Description Status
-----------------------
Main Compiler Assignment Working
Glamdring Glamdring Implementation In Progress

## Dependcies:
Flex
Bison
LLVM 3.8

## Documentation
A more detailed report, explaining how the code works can be found here:
[Report](./report.md)

## Running the code:
make (See the IR code for demo code test.c)
make test (To run the demo code test.c using lli)

## Disclaimer:
To get started tutorial at: https://gnuu.org/2009/09/18/writing-your-own-toy-compiler/ was followed.
Some of the initial code was taken from this to get things started.

## Constructs:
There are many differences and construct implemented for the assignment which is not present in the tutorial.

1. Tutorial uses its own simplified version of token and lex files
2. I have used the token and the grammar provied for the assignment which is much more complex and differs completely from that given in tutorial.

## Constructs supported (in addition to that present in the tutorial):
1. Function declaration
2. Extern keyword
3. const keyword
4. Pointer
5. Ellipsis
6. Variable types: int double char 
7. long is partially supported and not all operations are valid on it.
7. pointers for calling the printf function.

These where required so that printf declaration:
	extern int printf(char const *format, ...);
works

## Apart from these constructs:
1. Arithmetic operatios + - * /
2. Unary operator _++ -- (with left and right placement)
3. Comparison operators <= == != < > >=
4. Assignment operator += -= *= \= |= &=
5. If then else statment. Even if else is missing
6. While loop
7. Do while loop
8. For loop, (all the constructs mentioned in the grammar)
9. Global variables
10. Const keyword.
11. Function Definition and Function Declarations

are supported.
