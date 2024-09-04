//
// Created by goura on 15-06-2024.
//
#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    cout << "Enter the Value A_ " << endl;
    cin >> a;
    cout << "Enter the Value B_ " << endl;
    cin >> b;
    char op;
    cout << "Enter the Operaction to be performed_ "  << endl;
    cin >> op;
    int ans;
    switch(op) {
        case '+' : ans = a + b;
        break;

        case '-' : ans= a - b;
        break;

        case '/' : ans = a % b;
        break;

        case '*' : ans = a * b;
        break;

    }
    cout << ans;
    return 0;
}