//
// Created by goura on 22-07-2024.
//
/*
 * Pattern Tye
{10, 10} {20, 10} {30, 10} {40, 10}
{10, 20} {20, 20} {30, 20} {40, 20}
{10, 30} {20, 30} {30, 30} {40, 30}
{10, 40} {20, 40} {30, 40} {40, 40}
 *
 */

#include<iostream>
using namespace std;

int main() {

    int arr[4] = {10, 20, 30, 40};
    int n  = 4;

    for(int i = 0; i < n ; i++ ) {

        for(int j = 0; j < n; j++) {
            cout << "{" << arr[j] << ", " << arr[i] << "} ";
        }
        cout << endl;
    }

    return 0;
}