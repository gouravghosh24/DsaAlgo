//
// Created by goura on 24-05-2024.
/*
 * Patter Type
    11111
    22222
    33333
    44444
    55555
 *
 */
//














#include<iostream>
using namespace std;

int main() {

    // initialising the variable to store the number of rows and coloums required in a pattern
    int n;
    cin >> n;

    // intialising the starting point of rows using i
    int i = 1;

    // loop to check if i/the start point of the rows is less than n or the user entered value
    while (i <= n)
    {

        // initialising the starting point of the colomun using j = 1
        int j = 1;
        // loop to check if j/the start point of the coloumn is less than n or the user entered value
        while (j <= n)
        {

            // printing i which is the value of the row
            cout << i;

            // increase j + 1 until it satisfies the users input for the number of coloum and rows
            j = j + 1;
        }

        // Next line
        cout << endl;

        /* increase i + 1 so that we can print another rows by going to the row number 2
         as i is currently 1 and it needs to be incremented by 1 to enter the next row */

        i = i + 1;
    }

    return 0;
}