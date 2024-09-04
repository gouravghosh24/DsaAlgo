// Question : Leetcode
/* Given an array nums containing n distinct numbers in the range [0, n],
return the only number in the range that is missing from the array.
Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3].
2 is the missing number in the range since it does not appear in nums.

Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2].
2 is the missing number in the range since it does not appear in nums.

Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9].
8 is the missing number in the range since it does not appear in nums.

Constraints:

    n == nums.length
    1 <= n <= 104
    0 <= nums[i] <= n
    All the numbers of nums are unique.



Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?

*/
// Solve below: Find the missing number in the array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    // vector<int> arr = {3,0,1};
    // vector<int> arr1 = {0,1};
    vector<int> arr2 = {9, 6, 4, 2, 3, 5, 7, 0, 1};

    // We have to sort the vector first to be able to perform a binary search
    sort(arr2.begin(), arr2.end());

    int n = arr2.size();
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ansIndx = -1;

    // While condition to iterate over the vector and search the missing element
    while (start <= end)
    {

        // Storing the value of the index element in numb
        int numb = arr2[mid];
        // Storing the index in indx
        int indx = mid;
        // storing the difference value in diff
        int diff = numb - indx;

        // checking if the difference of the index and the value = 0
        if (diff == 0)
        {
            // pushing the start index to right
            start = mid + 1;
        }
        // checking if the difference of the index and the value = 1
        else if (diff == 1)
        {

            // Store and compute: hence storing the element to the ansIndx
            ansIndx = mid;

            // if the difference is 1 then pushing the end index to left
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    // This condition is being hard coded only for the vector arr1
    // So that we can return the last element that is being reached
    if (ansIndx == -1)
    {
        cout << n;
    }

    cout << ansIndx << endl;
    return 0;
}