/*
    Find The Factorial
    Refer Page 49 on the copy
*/

#include <iostream>
using namespace std;

long long int findFactorial(int n){

    long long int factorial=1;
    for(int i = 1; i <= n; i++){
        factorial = factorial*i;
        
    }

    return factorial;

}

int main(){

    int n;
    cin >> n;

    long long int printFact = findFactorial(n);
    cout<< "Factorial of " << n << " is: " << printFact;
    return 0;
}