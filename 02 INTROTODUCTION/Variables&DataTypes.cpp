#include<iostream>
using namespace std;

int main(){

    //Int is a data type and marks is a variable
    // int is used for whole numbers
    // 50 is the value stored in the integer variable 
    // defination => marks is defined and setup with a value it is a complete defination 
    // You cannot declare the same name variable in the scope more than 1 time
    int marks = 50;

    // declaration => age is declared but not assigned a value
    // age will print a garbage/random value at this moment
    int age;

    //manipulation or updation is happening with marks variable
    marks = 60;
    age = 18;

    // Types of Data types
    //Integer
    int a = 10;
    // Float
    float b = 0.254;
    //Boolean
    bool c = true;
    bool e = false;
    // Character
    char d = 'a';

    cout << marks << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << e << endl;
    cout << d << endl;
    cout << age << endl; 
    // sizeof() will print the size of the data type
    cout << sizeof(marks) << endl;
    
    return 0;
}