//
// Created by goura on 28-05-2024.
//
#include<iostream>
using namespace std;

int main() {


    int n;
    cin >> n;
    int i = 1;
    while(i <= n) {

        // Initialising stars to be printed
        int stars = n - i + 1;

        // while loops to print stars
        while(stars) {
            cout << "*";
            stars = stars - 1;
        }
        cout << endl;
        i = i + 1;

    }

    return 0;
}