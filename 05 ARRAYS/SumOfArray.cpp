//
// Created by goura on 23-06-2024.
//
#include<iostream>
using namespace std;

// isSum is a function to add the values on the array element  function parametres are
// arr[] which is the array in the main function and n is the size of the inputs or elements to be inserted in the array
int isSums(int arr[], int n) {


    int first;
    int ans;
    for(int i = 0; i < n; i++) {
        first = arr[i];

        ans = first + ans;
        //This value is used to increament the array index
        //so that we can reach all the values inserted in the array to add them
        arr[0]++;

    }

    cout << "After adding the elements in the array the Answer is:" << ans << endl;
};


int main() {
    int n;
    cout << "Please enter the number of elements you want to enter in the array: ";
    cin >> n;
    int arr[20];

    for(int i = 0; i < n; i++ ) {
        int z = 0;
        cout << "Enter the elements: " << i <<"th element" << " :";
        cout << endl;
        cin >> arr[i];
    }
    isSums(arr, n);
    return 0;
}