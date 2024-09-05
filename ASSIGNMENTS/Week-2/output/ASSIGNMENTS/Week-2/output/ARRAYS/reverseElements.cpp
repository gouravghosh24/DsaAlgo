
//Header files
#include<iostream>
using namespace std;

// An integer function to reverse the whole array of elements, func arguments are arr[], and size 
void reverseElements(int arr[], int size){
// I have taken a temporary variable to store the reversed elements
    int temp = 0;
    // for loop to iterate through the array elements where i equal to the last array index, we will iterate until i = 0 
    // and i will keep decreasing each iteration
    for(int i = size -1; i >= 0; i--){
        temp = arr[i];
       // printing the reversed array elements and the index at which they are present
        
        cout << temp << " is at " << i << " Index. ";
    }

}

// Main function 
int main(){

    // Integer array of 5 elements
    int arr[5]= {20,30,40,50,60};
    // size of the integer is 5
    int size = 5;
    
    // calling the function reverseElements()
    reverseElements(arr, size);

    // Main function is returning 0
    return 0;
}

// Code ends Exit!