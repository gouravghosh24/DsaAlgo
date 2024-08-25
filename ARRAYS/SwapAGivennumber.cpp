//
// Created by goura on 30-06-2024.
//
#include<iostream>
using namespace  std;
void SwapTheGivennumber(int arr[], int m, int n){
        int i = m + n;
        int j = n - 1;
        int temp;
        while(i < j) {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
}

void PrintArray(int arr[],int x, int n) {
    for(int i = 0; i <= n; i++) {
        cout << arr[i];
    }
}


int main() {

    int n;
    cout << "Enter the size of the Array: " << endl;
    cin >> n;
    int m;
    cout << "Enter the Given index of the value you wish to swap: " << endl;
    cin >> m;
    int arr[20];
    cout << "Enter the Array Elements: " << endl;
    for(int i = 0; i <n; i++) {
        cin >> arr[i];
    }

    SwapTheGivennumber(arr,n, m);
    PrintArray(arr, m , n);
}