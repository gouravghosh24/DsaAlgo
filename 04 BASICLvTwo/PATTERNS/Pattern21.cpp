//
// Created by goura on 30-05-2024.
//
/*
 *
 Pattern Type:
 * * * *
   * * *
     * *
       *
 *
 */
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i<=n) {

        // Print the spaces first
        int j = 1;
        while(j < i) {
            cout << " ";
            j = j + 1;
        }

        // Initialise the stars as a new variable and start printing the stars
        int stars = n - i;

        while(stars) {
            cout << "*";
            stars = stars - 1;
        }

        cout << endl;
        i = i + 1;
    }
    return 0;
}