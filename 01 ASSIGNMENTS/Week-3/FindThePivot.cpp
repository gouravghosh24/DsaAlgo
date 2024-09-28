    /*
Find The Pivot Index : Leetcode : refer page 167-169 or 88-90(new copy) on the copy for notes
*/

#include <iostream>
#include <vector>
using namespace std;

// // Function to check the Pivot Index
// int BruteForce(vector<int> &nums)
// {

//     int n = nums.size();

//     // Setting up the outer loop
//     for (int i = 0; i < n; ++i)
//     {
//         int lSum = 0;
//         int rSum = 0;
//         // checking and adding the sums to left side
//         for (int j = 0; j < i; ++j)
//         {
//             // storing the added value of the left indexes per iteration on lSum
//             lSum += nums[j];
//         }

//         // checking and adding the sums to right side
//         for (int j = i + 1; j < n; ++j)
//         {
//             // storing the added value of the right indexs per iteration on rSum
//             rSum += nums[j];
//         }

//         // If the left sum is == to right sum, we have found the pivot index and we will now return the index and stop the iteration
//         if (lSum == rSum)
//         {
//             return i;
//         }
//     }
//     //If the pivot index is not found we will return -1
//     return -1;
// }

// This is method 2 of finding the Pivot index using Prefix sum method which
// is faster than the Brrute force approach Calling the vector by reference
// and storing the nums vector as a copy of the actual vector
int prefixSumApproach(vector<int> &nums)
{

    // n is the size of the array
    int n = nums.size();

    // Creating 2 vectors one to store the left sum and another is to store
    // the right sum and the array elements are initialised by 0
    vector<int> lsum(nums.size(), 0);
    vector<int> rsum(nums.size(), 0);

    // adding elements to the left sum and adding the elements
    for (int i = 1; i < n; i++)
    {
        lsum[i] = lsum[i - 1] + nums[i - 1];
    }

    // adding elements to the right sum and adding the elements
    for (int i = n - 2; i >= 0; i--)
    {
        rsum[i] = rsum[i + 1] + nums[i + 1];
    }

    // iterating through the element of the left sum vector and right sum
    // vector to check at which point the pivot index is found i is set to 0
    // here because the question has asked to check the pivot from the left
    for (int i = 0; i < nums.size(); i++)
    {
        if (lsum[i] == rsum[i])
        {
            // once the pivot index is found we return the index value
            return i;
        }
    }
    // If the pivot is not found we return -1
    return -1;
}

int main()
{

    vector<int> nums = {1, 7, 3, 6, 5, 6};

    // int ans = BruteForce(nums);
    // cout << ans;

    int ans = prefixSumApproach(nums);
    cout << ans;
    return 0;
}