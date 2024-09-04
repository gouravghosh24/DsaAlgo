//
// Created by goura on 03-06-2024.
//
// Fibonnaci

#include<iostream>
using namespace std;

int main() {

    int  n = 10;
    int a = 0;
    int b = 1;
    for(int i = 1; i <= n; i ++) {
        int sum = a + b;
        a = b;
        b = sum;
        cout << sum << " ";

    }

    return 0;
}