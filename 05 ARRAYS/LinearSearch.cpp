//
// Created by goura on 24-06-2024.
//
#include<iostream>
using namespace std;

bool SearchArray(int arr[], int size, int key) {

    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return 1;
        }

    }
        return 0;
}

int main() {

    int n;
    cin >> n;
    int arr[10] = {4, 2, 0, 11, 64, 88, 42, 20, 54, 55};

    bool result = SearchArray(arr, 10, n);
    if(result) {
        cout << "Element is Found! " << n;
    }
    else{ cout << "Element not found! " << n; }

    return 0;
}
