#include <iostream>
#include <cstdlib> // needed for exit()
using namespace std;

// Control Flow
//  1- Halt ... exit(0)
//  2- Jumps  { goto, break, and continue }
//  2- Conditional branches { if-else , Switch , The ? : Operator }
//  3- Loops { while, do while, and for loops... C++11: for each }
//  4- Exceptions .. mechanism for handling errors

int main()
{

    // User input
    //std::cout << "Enter a number: ";
    //int x;
    //std::cin >> x;
    //cout << "Your number square is: " << x*x << endl;


    // halt
    //cout << "statement 1" << endl;
    ///exit(0);
    //cout << "statement 2" << endl;

    // The ? : Operator
    cout << "Enter a number: ";
    int y;
    cin >> y;
    string result;
    result = (y > 0) ? "Positive" : "Negative";
    cout << "The number is: " << result << endl;


    // if-else ,  statement
    /*
    if (expression)
    statement


    if (expression)
        statement
    else
        statement2

    */
    int number = 255;
    int my_number;
    cout << "Guess the number: ";
    cin >> my_number;
    if(my_number == number)
        cout << "CORRECT!";
    /*else
        cout << "7az awfar next time :P !";
    */

    //-------------------------------------------------------

    // else if statement
    std::cout << "Enter a number: ";
    int number2;
    std::cin >> number2;
    if (number2 > 10)
        std::cout << number2 << "is greater than 10\n";
    else if (number2 < 10)
        std::cout << number2 << "is less than 10\n";
    else
        std::cout << number2 << "is exactly 10\n";

    //-------------------------------------------------------

    // nested if
    std::cout << "Enter a number: ";
    int number3;
    std::cin >> number3;
    if (number3 > 10)
    {
        if (number3 < 20)
            std::cout << number3 << "is between 10 and 20 \n";
        else // attached to inner if statement
            std::cout << number3 << "is greater than 20 \n";
    }

    //-------------------------------------------------------

    //Using logical operators with if statements  { && , || ,  !}
    std::cout << "Enter a number: ";
    int number4;
    std::cin >> number4;
    if (number4 > 10 && number4 < 20)
        std::cout << number3 << "is between 10 and 20 \n";
    else
        std::cout << number3 << "is greater than 20 \n";

    //-------------------------------------------------------

    //  Switch statements
    cout << "Enter a color code: " << endl;
    int colorCode;
    cin >> colorCode;
    switch (colorCode)
    {
        case 0:
            cout << "Black";
            break;
        case 1:
            cout << "White";
            break;
        case 2:
            cout << "Red";
            break;
        case 3:
            cout << "Green";
            break;
        case 4:
            cout << "Blue";
            break;
        default:
            cout << "Unknown";
            break;
    }

    if (colorCode == 0)
        std::cout << "Black";
    else if (color == 1)
        std::cout << "White";
    else if (color == 2)
        std::cout << "Red";
    else if (color == 3)
        std::cout << "Green";
    else if (color == 4)
        std::cout << "Blue";
    else
        std::cout << "Unknown";

    //-------------------------------------------------------

    // Arrays:
    /*
        An array is an aggregate data type that lets us access many
        variables of the same type through a single identifier.
    */

    // allocate 30 integer variables (each with a different name)
    int testScoreStudent1;
    int testScoreStudent2;
    int testScoreStudent3;
    // ...
    int testScoreStudent30;

    int testScore[30]; // allocate 30 integer variables in a fixed array
    testScore[0] = 140;
    testScore[1] = 150;
    testScore[2] = 0;
    // ...
    testScore[29]= 120;

    //-------------------------------------------------------

    double array[3]; // allocate 3 doubles
    array[0] = 2.0;
    array[1] = 3.0;
    array[2] = 4.3;
    double avg = (array[0] + array[1] + array[2]) / 3;
    cout << "The average is " << avg << "\n";

    //-------------------------------------------------------

    // using a literal constant
    int scores[5]; // Ok

    // using a macro symbolic constant
    #define ARRAY_LENGTH 5
    int salary[ARRAY_LENGTH]; // Syntactically okay, but don't do this

    // using a symbolic constant
    const int arrayLength = 5;
    int emplyees[arrayLength]; // Ok

    // using a non-const variable
    int length;
    std::cin >> length;
    int array[length]; // Not ok -- length is not a compile-time constant!

    // using a runtime const variable
    int temp = 5;
    const int length = temp; // the value of length isn't known until runtime, so this is a runtime constant, not a compile-time constant!
    int array[length]; // Not ok

    //-------------------------------------------------------

    int prime[5]; // hold the first 5 prime numbers
    prime[0] = 2;
    prime[1] = 3;
    prime[2] = 5;
    prime[3] = 7;
    prime[4] = 11;

    int prime1[5] = { 2, 3, 5, 7, 11 }; // use initializer list to initialize the fixed array

    int prime2[] = { 2, 3, 5, 7, 11 };  // let initializer list set length of the array

    int prime3[5] { 2, 3, 5, 7, 11 }; // use uniform initialization to initialize the fixed array

   int students[5] = { 7, 4, 5 }; // only initialize first 3 elements
   cout << students[0] << '\n';
   cout << students[1] << '\n';
   cout << students[2] << '\n';
   cout << students[3] << '\n';
   cout << students[4] << '\n';

    int grades[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
    cout << "grades array is " << sizeof(grades) << " bytes long." << endl; // will print the size of the array
    cout << "grades array has " << sizeof(grades)/sizeof(int) <<  " elements" << endl;

    int product[40] = { 0 };

    string studentsNames = {"Ahmed" , "Karim" };


    //-----------------------------------------------
    //      [row][column]
    int matrix[3][3]; // a 3-element array of 3-element arrays
    /*
    [0][0]  [0][1]  [0][2]    row 0
    [1][0]  [1][1]  [1][2]    row 1
    [2][0]  [2][1]  [2][2]    row 2
    */
    matrix[0][0] = 54;
    matrix[0][1] = 74;
    matrix[0][2] = 42;

    matrix[1][0] = 85;
    matrix[1][1] = 96;
    matrix[1][2] = 80;

    matrix[2][0] = 71;
    matrix[2][1] = 12;
    matrix[2][2] = 66;

    cout << "element[0][0]: " << matrix[0][0] << endl;
    cout << "element[0][1]: " << matrix[0][1] << endl;
    cout << "element[0][2]: " << matrix[0][2] << endl;
    cout << "element[1][0]: " << matrix[1][0] << endl;
    cout << "element[1][1]: " << matrix[1][1] << endl;
    cout << "element[1][2]: " << matrix[1][2] << endl;
    cout << "element[2][0]: " << matrix[2][0] << endl;
    cout << "element[2][1]: " << matrix[2][1] << endl;
    cout << "element[2][2]: " << matrix[2][2] << endl;

    // a 3-rows array of 5-columns arrays
    int example[3][5] ={ { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }, { 11, 12, 13, 14, 15 } };

    int example1[2][] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };

    int example2[][] = { { 3, 4 }, { 5, 6, } };


    return 0;
}
