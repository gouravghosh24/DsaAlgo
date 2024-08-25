//
// Created by goura on 24-05-2024.

/*
 *
    54321
    54321
    54321
    54321
 *
 */















#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int i=1;
    while(i < n){
        int j=0;

        while(j < n){

            cout << n - j;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}
