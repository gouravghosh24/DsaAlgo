//
// Created by goura on 24-05-2024.
/**
 *
Pattern Type:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

 */












#include<iostream>
using namespace std;

int main(){



    int n;
    cin >> n;

    int rows = 1;
    int countr = 1;
    while(rows <= n){
        int colmns = 1;
        while(colmns <= rows){
            cout << countr <<" ";
            countr = countr + 1;
            colmns = colmns + 1;
        }
        cout << endl;
        rows = rows + 1;
    }


    return 0;
}