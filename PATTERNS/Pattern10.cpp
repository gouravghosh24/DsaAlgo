//
// Created by goura on 26-05-2024.
//
/*
 *
    Pattern Type:

    A A A A A
    B B B B B
    C C C C C
    D D D D D
    E E E E E



 */










#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    // character to print a b c d e, as the ASCII Value of a is 97
    //char b = 97;
    int i = 1;


    while(i <= n) {

        int j = 1;
        while(j <= n) {

            // Or you can also use typecasting to type cast integer to character
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
       // b = b + 1;
    }
    return 0;
}