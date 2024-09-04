//
// Created by goura on 24-05-2024.
//
#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int i = 2 % n;

    while(i <= n) {
        cout << i << " ";
        i = i + 2;

    }

    return 0;
}