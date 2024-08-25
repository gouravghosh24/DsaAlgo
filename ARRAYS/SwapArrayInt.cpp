//
// Created by goura on 28-06-2024.
//
#include<iostream>
using namespace  std;

void SwapArrayints(int arr[], int size) {

    for(int m = 0; m < size; m += 2) {
        if(m+1 < size) {
            swap(arr[m], arr[m+1]);
        }
    }
}
void PrintElem(int arr[], int n) {

    for(int i= 0; i<n; i++) {
        cout << arr[i] << " ";
    }

}
int main() {

    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;
    int arr[10];

    cout << "Enter the elements: ";
    for(int i=0; i < size; i++) {
        cin >> arr[i];
    }


    SwapArrayints(arr, 5);
    PrintElem(arr, 5);
}