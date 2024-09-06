#include<iostream>
using namespace std;

int main(){
    int n, sum = 0; // sum was declared only hence I have set it to value 0 so that it doesn't return garbage value
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        //a bad code was found below
        // cin >> input[0]; this will only take input on the first index of the array

        //rectified
        cin >> input[i];
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    // int arr[] = {1,2,3,4,5};
    // cout << arr << " " << &arr << " " << arr[0];
    // return 0;
}