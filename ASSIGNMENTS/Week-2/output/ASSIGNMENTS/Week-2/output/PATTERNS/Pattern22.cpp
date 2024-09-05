//
// Created by goura on 31-05-2024.
//
/**
 *
 Pattern Type:
      1
     121
    12321
   1234321
 *
 */
#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;
    while(i <= n) {

        //Print the spaces
        int spaces = n - i;
        while(spaces) {
            cout << " ";
            spaces = spaces - 1;
        }

        //Print the 2nd Triangle of numbers
        int j = 1;
        while(j <= i) {

            cout << j;
            j = j + 1;
        }
        // Print the 3rd Triangle of numbers
        int stars = i - 1;
        while(stars) {
            cout << stars;
            stars = stars - 1;
        }


        cout << endl;
        i = i + 1;
    }


    return 0;
}