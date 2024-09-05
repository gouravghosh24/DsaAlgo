#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[] = {3, 2, 4, 3, 2, 4, 67};
    int n = 7;
    int ans = 0;

    // STL Function to run sorting on the array
    // Sorting would take O(nlogn) => Time 
    sort(arr, arr + n);

    // For loop to iterate over the array elements
    // For loop would take O(n) => Time 
    for (int i = 0; i < n;)
    {
        // Here we will first check if the array index is inside the array and has not exceeded the array size
        // Now, we will check if the 1st array element is equal to the second array element
        if (i + 1 < n && arr[i] == arr[i + 1])
        {
            // if so, we will push the array index to 2 places so that we can check another 2 elements
            i += 2;
        }
        else
        {
            // if the array element 1 and array element 2 are not the same = we will store the unique element in ans
            ans = arr[i];
            // now break the condition
            break;
        }
    }
    // Exit the loop
    // Now finally Print the answer that is stored inside the ans variable
    cout << "Unique Element in the Array is: " << ans;

    // Time complexity of the code is:
    // 1. Sorting would take O(nlogn) => Time
    // 2. For loop would take O(n) => Time
    // Hence, adding O(nlogn) + O(n) = O(nlogn) 

    return 0;
}
//Code exit