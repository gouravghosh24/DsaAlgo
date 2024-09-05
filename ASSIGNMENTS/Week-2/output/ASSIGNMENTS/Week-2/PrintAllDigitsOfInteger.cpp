/*
    Print all digits of an integer
    Refer page 46 on the copy
*/
#include <iostream>
using namespace std;

void printAllDigits(int n){

    while(n){

        int digits = n%10;
        cout << digits << " ";
        n = n/10;
    }

}
int main() {
    
    int n;
    cin >> n;

    printAllDigits(n);

    return 0;
}
