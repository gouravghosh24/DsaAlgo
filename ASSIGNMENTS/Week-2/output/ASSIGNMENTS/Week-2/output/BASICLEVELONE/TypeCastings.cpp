#include <iostream>
using namespace std;
/*

    TypeCasting : To change one data type to another data type - Reference page 13-
    char - int
    int - char
    float - int
    int - double

    implicit typecasting
    1. Automatically typecasted by the c++ compiler
    2. int + float = information loss as value after point 20 + 20.50 will be lost hence here only 20 will be printed and .50 lost
    3. char is automatically converted as per its ASCI Value, char ch = 'A" (ASCI Value of A is 97)
        ch = ch + 1; cout << ch << endl; This will print a character corresponding to 66 which is B

    Explicit typecasting
    1. This type of conversion is done manually by the programmer as per the desired data type of the programmer


*/

void solve()
{
}

int main()
{

    int Iaminteger = 10;
    int Iamalsointeger = 3;
    float Iamfloat = 20.5;
    char Iamcharacter = 'A';
    double pi = 25.325487;
    Iamcharacter = Iamcharacter + 1;

    int Iamstoring = Iaminteger + Iamfloat;
    Iamstoring = Iamcharacter;

    // Explicit conversion
    Iaminteger = (double)pi;
    
    //Bonus point -> Explicit Type casting
    // Here will change the f variable to float explicitly so that it can print the floating print value
    // int/int = int, int/float = float, float/int = float

    float print = Iaminteger/ ((float) Iamalsointeger);

    cout << "Character conversion for character: " << Iamcharacter << endl;
    cout << "The decimal values will not be printed: " << Iamstoring << endl;
    cout << "Now the A will be converted from character to int and the interger value will be printed: " << Iamstoring << endl;
    cout << "pi will no longer be a double value and it will truncate all the values after the decimal: " << Iaminteger << endl;
    cout << "Print will show the decimal value as it was explicitly type casted: " << print << endl;

    return 0;
}