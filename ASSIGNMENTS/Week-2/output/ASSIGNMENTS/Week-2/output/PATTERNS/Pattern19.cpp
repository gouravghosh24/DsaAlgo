//
// Created by goura on 27-05-2024.
//
/*
Pattern Type:
      *
    * *
  * * *
* * * *

*
 */
#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int i = 1;

    //We are using space to print the spaces and j(coloumns) is used to print the starts so we have 3 while loops running on the code
    while(i <= n) {


        int space = n - i;
        while(space) {
            cout << " ";
            space = space - 1;
        }

        int j = 1;
        while(j <= i) {

            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }



    return 0;
}