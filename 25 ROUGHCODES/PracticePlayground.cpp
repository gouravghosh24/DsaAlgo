//
// Created by goura on 27-05-2024.
//

// This is a Playground where you can practice your Questions and challenges!

#include<iostream>
using namespace std;

int main() {

// Write your code below!
    int n;
    cin >> n;
    char ch = 'A';
    int i = 1;

    while(i <= n) {
        int j = 1;
        while(j <= i) {
            cout << ch + i - j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

// Return Statement
    return 0;
}

// Code ends here!