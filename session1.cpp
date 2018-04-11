// Example program
#include <iostream>
#include <string>

using namespace std;

// constants
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

int main()
{


 cout << "Hello  world \a " << endl;
// printf("Hello world \n");
// Escape sequence
/*
        \\	    \ character
        \'	    ' character
        \"	    " character
        \?	    ? character
        \a	    Alert or bell
        \b	    Backspace
        \f	    Form feed
        \n	    Newline
        \r	    Carriage return
        \t	    Horizontal tab
        \v	    Vertical tab
*/
// Datatypes and Variables
/*
        Boolean	                bool
        Character           	char
        Integer	                int
        Floating point	        float
        Double floating point	double
        Valueless	            void
        Wide character	        wchar_t
*/

 // Datatypes Modifiers
 /*
        signed
        unsigned
        short
        long
 */

 // Datatypes Size
 // sizeof(type)
 cout << "int size: " << sizeof(int)  << endl;
 cout << "float size: " << sizeof(float)  << endl;
 cout << "char size: " << sizeof(char)  << endl;
 cout << "bool size: " << sizeof(bool)  << endl;
 cout << "double size: " << sizeof(double)  << endl;
 cout << "void size: " << sizeof(void)  << endl;
 cout << "wchar_t size: " << sizeof(wchar_t)  << endl;

 // constants
const int x = 10;
const float PI = 3.14;

// Operators
/*
    1- Arithmetic Operators
    2- Relational Operators
    3- Logical Operators
    4- Bitwise Operators
    6- Misc Operators
*/

// 1- Arithmetic
/*
    +	Adds two operands
    -	Subtracts second operand from the first
    *	Multiplies both operands
    /	Divides numerator by de-numerator
    %	Modulus Operator and remainder of after an integer division
    ++	Increment operator, increases integer value by one
    --	Decrement operator, decreases integer value by one
*/
int A = 10;
int B = 20;
int C;
C = A + B;
cout << "A + B will give  "  << C << endl;
cout << "A - B will give  " << A - B << endl;
cout << "A * B will give  " << A * B << endl;
cout << "B / A will give  "   << A / B << endl;
cout << "B % A will give "    << A % B << endl;
cout << "A++ will give  "    << A++ << endl;
cout << "A-- will give  "     << A-- << endl;

// 2- Relational Operators
/*
    ==	equal to
    !=	not equal to
    >	greater than
    <	smaller than
    >=	greater than or equal
    <=	smaller than or equal
*/
cout << "A == B will give  "  << (A == B) << endl;
cout << "A != B will give  "  << (A != B) << endl;
cout << "A  > B will give  "  << (A > B) << endl;
cout << "A  > B will give  "  << (A < B) << endl;
cout << "A >= B will give  "  << (A >=  B) << endl;
cout << "A <= B will give  "  << (A <=  B) << endl;

// 3- Logical Operators
/*
    &&	Called Logical AND operator.
    ||	Called Logical OR Operator.
    !	Called Logical NOT Operator.
*/
bool X = 1 , Y = 0;
cout << "X && Y will give  "  << (X && Y)  << endl;
cout << "X || Y will give  "  << (X || Y) << endl;
cout << "!X     will give  "  << !x << endl;

// 4- Bitwise Operators
/*
          AND     OR      XOR    NOT
p	q	p & q	p | q	p ^ q    ~p
0	0	  0	      0	      0       1
0	1	  0	      1	      1       1
1	1	  1	      1	      0       0
1	0	  0	      1	      1       0
*/
   unsigned int a = 60;	  // 60 = 0011 1100
   unsigned int b = 13;	  // 13 = 0000 1101
   int c = 0;
   c = a & b;             // 12 = 0000 1100
   cout << "a & b - Value of c is : " << c << endl ;

   c = a | b;             // 61 = 0011 1101
   cout << "a | b - Value of c is: " << c << endl ;

   c = a ^ b;             // 49 = 0011 0001
   cout << "a ^ b - Value of c is: " << c << endl ;

   c = ~a;                // -61 = 1100 0011
   cout << "~a    - Value of c is: " << c << endl ;

   c = a << 2;            // 240 = 1111 0000
   cout << "a << 2  - Value of c is: " << c << endl ;

   c = a >> 2;            // 15 = 0000 1111
   cout << "a >> 2 - Value of c is: " << c << endl ;


// Decision Making  (Control flow)


 return 0;
}
