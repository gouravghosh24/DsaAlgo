//
// Created by goura on 21-06-2024.
//
#include<iostream>
using namespace std;

int isMaxi(int num[], int n) {

    int max = INT_MIN;
    for(int i =0; i <= n; i++) {
        if(num[i] > max) {
            max = num[i];
        }
    }
    return max;
}

int isMin(int num[], int n) {
    int min = INT_MAX;
    for(int i = 0; i <= n; i++) {

        if(num[i] < min) {
            min = num[i];
        }
    }

    return min;
}

int main() {

    int size;
    cout << "Enter size of the array: " << '\t';
    cin >> size;

    int num[100];
    cout << "Enter the array elements: " << '\t';
    for(int i = 0; i <= size; i++) {
        cin >> num[i];
    }

    cout << "Largest number is: " << isMaxi(num, size) << '\t';
    cout << "Smallest Number is: " <<isMin(num, size) << endl;

    return 0;
}