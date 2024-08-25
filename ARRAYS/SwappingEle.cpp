// Header files
#include<iostream>
using namespace std;

// Function to swap 2 numbers in the array
int swappingEle(int arr[], int size){
    // temp is the temporary integer data type to store the values to be swapped
    int temp = 0;
    // For loop is used to iterate through the array elements 
    for(int i = 0; i < size; i++){
        // we are stroing the 0th index value of the array on temp
        temp = arr[i];
        // Now the 0th index is empty hence, we will store the last array element which is n -1 to 0th index
        arr[i] = arr[size - 1];
        //now the last index of the array is empty so we will again restore it by storing the values of the first element that is stored in temp for temporary basis
        arr[size - 1] = temp;
    }
    // this for loop is to interate over the data elements in the array after swapping and print them
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

}

// This is the main function on the program
int main(){

    // I have cretated an Array of elements named arr and the size of the array is 2 and the elements are 10, 20
    int arr[2] = {10,20};
    // just so that I can access the size on the function swappingEle(), I have setup this size data type once again
    int size = 2;

    // Calling the function on the main functions so that our function can now exectute and perform the instructions
    swappingEle(arr, size);

    // integer type function, hence we will have to have a return type, which is why it is setup at 0
    return 0;
}