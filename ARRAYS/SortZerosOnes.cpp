//
// Created by goura on 22-07-2024.
//
#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1,0,0,1,0};
    int size = 5;
    int zeros = 0;
    int ones = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i]!=1) {
            zeros++;
        }
        else if(arr[i]!=0) {
            ones++;
        }
    }
    int i =0;
    for(; i < zeros; i++) {
        arr[i] = 0;
    }
    for(; i < size; i++) {
        arr[i] = 1;
    }
for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}
    return 0;
}