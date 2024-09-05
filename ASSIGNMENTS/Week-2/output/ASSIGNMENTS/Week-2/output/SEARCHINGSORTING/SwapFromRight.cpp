/*
Segregate 0s and 1s::::

Given an array arr consisting of only 0's and 1's in random order. Modify the array in-place to segregate 0s onto the left side and 1s onto the right side of the array.

Examples :

Input: arr[] = [0, 0, 1, 1, 0]
Output: [0, 0, 0, 1, 1]
Explanation:  After segregation, all the 0's are on the left and 1's are on the right. Modified array will be [0, 0, 0, 1, 1].

Input: arr[] = [1, 1, 1, 1]
Output: [1, 1, 1, 1]
Explanation: There are no 0s in the given array, so the modified array is [1, 1, 1, 1]

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

*/


#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {1,0,1,0,0};
    int n = 5;
    int h = 0;
    int l = n - 1;
    for(int i = 0; i < n; i++){

        // Checking if the first and last elements are arranged correctly or else we will swap the elements
        if(arr[h] == 1 && arr[l] == 0){
            swap(arr[h], arr[l]);
        }
        // if not then we will check if first element which is h is 0 and end is 1, 
        // then we will increment the first pointer and decrement the last pointer
        else{
                if(arr[h] == 0){
                    h++;
                }
                if(arr[l] == 1){
                    l--;
                }
            
        }
        cout << arr[i] << " ";
        
    }
    

    return 0;
}