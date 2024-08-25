//
// Created by goura on 12-07-2024.
//
#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    while(start <= end) {

        if(key == arr[mid]) {
            return mid;
        }
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
        mid = (start + end)/ 2;
    }
    return -1;
}


int main() {

    int arr[5]= {22, 66, 77, 88, 99};
    int n = sizeof(arr);
    int key;
    cout << "Enter the Key you wish to find: ";
    cin >> key;

    int printingIndex = BinarySearch(arr, n, key);
    cout << printingIndex;

    return 0;
}