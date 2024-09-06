#include <iostream>
using namespace std;

int main()
{

    // Unary operators
    // Post increment a++ use the value first then print and then increment
    // Pre increment ++a increment the value first and then print

    // Assignment operators
    // =, +=, -=, *=, /=,  %=
    /*
        You cannot use the modulo operator (%) with floating-point numbers (float, double, long double) in C++.
        The modulo operator (%) is only defined for integer types (int, long, long long, etc.). When you try to use it with floating-point numbers, you will get a compiler error.
        If you need to find the remainder of a division involving floating-point numbers, you can use the fmod function from the <cmath> library
    */

    // Bitwise operator : Used for bit level opration 00001 ^ 00010
    // & = AND, | = OR, ` = NOT, << = Left Shift(works as *power of 2), >> = Right Shift (works as /2), ^ = XOR.
    /*
    Bitwise can only operate on
        1. Int (signed and unsigned)
        2. Long (signed and unsigned)
        3. Char (signed and unsigned)
        4. Short (signed and unsigned)
        5. Long long (signed and unsigned)

    Bitwise cannot operate on
    - Floating-point numbers (float, double, long double)
    - Boolean values (bool)
    - Enumerations (enum)
    - Structs or classes
    - Pointers
    - References


    */

    // Logical Operators
    //&& = AND, || = OR, ! = NOT

    int a = 5;
    cout << a << endl;
    cout << "Pre: " << (++a) << endl;
    cout << "Post: " << (a++) << endl;

    cout << "Pre: " << (--a) << endl;
    cout << "Post: " << (a--) << endl;
    cout << a << endl;

    return 0;
}