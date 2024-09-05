//
// Created by goura on 25-06-2024.
//
#include<iostream>
using namespace  std;

// Reversing the whole array elements
void reverse(int arr[], int n) {

    int start = 0;
    int end = n - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
}

// Printing the Array elements only after the swap functions complete running
void printArray(int arr[], int n) {

    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}


// Main function where all the functions are called
int main() {


 int n;
    cout << "Enter the Size of an Array: ";
    cin >> n;

    int arr[20];
    cout << "Enter the Array Elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    reverse(arr, n);
    printArray(arr, 5);
    return 0;
}