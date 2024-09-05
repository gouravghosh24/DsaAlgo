#include <iostream>
using namespace std;

void PrintCounting(){

    for(int i = 0; i <= 5; i++){
        cout << i << " ";
    }
}
int sum(int a, int b){
    int c = a*b;
    return c;
}

//pre declaration of the function
int multiples(int a, int b);

int main() {

    
    int a = 2;
    int b = 1;
    
    // A function is a way of grouping code into a single unit. It can take inputs, process them, and return as a result,
    // Some functions do not take inputs and print output. 
    //Functions help in organising the code, making it more readable and more maintainable
    // Functions avoid writing same code again and again
    // function has to have a return type or it can be void
    // Function name should be readable and understandable
    // We can pass a parametre integer a or float or string, char etc or any with a function void PrintCounting(int a){}
    // Ordering of the function is very important function should be declared before calling in main function
    // We can declare the inction before the main function and then define it after main function


    //calling the function

    PrintCounting();
    //storing the return value of the function on the totalSum 
    int totalSum = sum(a, b);
    cout << "Sum: " << totalSum << endl;

   
    totalSum = multiples(a, b); // here a, b inside the brackets are called arguments
    cout << "Multiple: " << totalSum << endl;
    return 0;
}

// post defination of the function
int multiples(int a, int b) // here a, b inside the brackets are called arguments
{
    int d  = a*b;
    return d;
}