//
// Created by goura on 22-07-2024.
//
#include<iostream>
using namespace std;

int FindUniqueNum(int arr[], int size) {
    int ans = 0;
    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {

    int arr[5] = {4,1,2,1,2};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int outp = FindUniqueNum(arr, size);
    cout << "The Output is: " << outp;
}