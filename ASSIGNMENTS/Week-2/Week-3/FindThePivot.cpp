/*
Find The Pivot Index : Leetcode : refer page 167 on the copy for notes
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to check the Pivot Index
int BruteForce(vector<int> &nums)
{

    int n = nums.size();

    // Setting up the outer loop
    for (int i = 0; i < n; ++i)
    {
        int lSum = 0;
        int rSum = 0;
        // checking and adding the sums to left side
        for (int j = 0; j < i; ++j)
        {
            // storing the added value of the left indexes per iteration on lSum
            lSum += nums[j];
        }

        // checking and adding the sums to right side
        for (int j = i + 1; j < n; ++j)
        {
            // storing the added value of the right indexs per iteration on rSum
            rSum += nums[j];
        }

        // If the left sum is == to right sum, we have found the pivot index and we will now return the index and stop the iteration
        if (lSum == rSum)
        {
            return i;
        }
    }
    //If the pivot index is not found we will return -1
    return -1;
}

int main()
{

    vector<int> nums = {1,7,3,6,5,6};

    int ans = BruteForce(nums);
    cout << ans;
    return 0;
}