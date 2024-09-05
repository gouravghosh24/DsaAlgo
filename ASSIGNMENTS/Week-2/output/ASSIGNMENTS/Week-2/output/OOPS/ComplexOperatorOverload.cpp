#include <iostream>
using namespace std;

class Complex
{

public:
    int real;
    int imag;

    // Create a constructor
    Complex()
    {
        real = imag = -1;
    }
    // Parameterised constructor
    Complex(int r, int i) : real(r), imag(i) {};

    // Overloading an Operator; We use const so that we do not change the argument passed we are passing B by reference so that there are no copies of the reference   
    Complex operator+(const Complex &B)
    {
        Complex temp;

        //here this-> is pointing to A's instance and it is adding B to do something
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
    }

    Complex operator==(const Complex &B){

        //Semp is the variable to store the == operations
        Complex Semp;
        //this-> is A (2) and B.real is B(3)
        Semp.real = this->real == B.real;
        //Here this-> is A (4) and B.image is B(5)
        Semp.imag = this->imag == B.imag;
        
        // Semp is storing the values and it is returning the output
        return Semp;
    }

    

    // Method to Print the output
    void Show()
    {
        printf("[%d + i%d]\n", this->real, this->imag);
    }
};

int main()
{

    Complex A(2, 4);
    Complex B(3, 5);

    Complex C = A + B;
    Complex D = A == B;

    
    // we are calling the output functions
    A.Show();
    B.Show();
    C.Show();

    //This will show [0 + i0] as 2 != 3 and 4 != 5
    D.Show();

    return 0;
}