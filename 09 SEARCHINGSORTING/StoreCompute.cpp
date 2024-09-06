#include <iostream>
using namespace std;

// Function to find the first occourence of the element in the array
void ansIndexOfFirstOcc(int arr[], int n, int target, int &ansIndex )//ansIndex is passed by reference to store the value actual
{

    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[m] == target)
        {
            // Store : Storing the element in ansIndex
            ansIndex = m;
            // &
            // Compute: if found element in the mid the search the left portion of the array to search for the first occourence of the element
            e = m - 1;
        }
        else if (target > arr[m])
        {
            s = m + 1;
        }
        else if (target < arr[m])
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
}

// Function to find the Last occourence of the element in the array
void ansIndexOfLastOcc(int arr[], int n, int target, int &ansIndex2)
{

    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[m] == target)
        {
            // Store : Storing the element in ansIndex
            ansIndex2 = m;
            // &
            // Compute: if found element in the mid the search the right portion of the array to search for the last occourence of the element
            s = m + 1;
        }
        else if (target > arr[m])
        {
            s = m + 1;
        }
        else if (target < arr[m])
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
}

// Function to find the Total occourence of the element in the array
int ansIndexOfTotalOcc(int &ansIndex, int &ansIndex2)
{
    // finding total number of occourence
    // storing value in ans 
    // ansIndex = firstoccurence index
    // ansIndex2 = last occurence index
    // hence we add them both with + 1
    int ans = ansIndex + ansIndex2 + 1;
    return ans;
}

int main()
{

    int arr[] = {10, 20, 20, 20, 20, 20, 20, 20, 20, 20, 30};
    int n = 11;
    int target = 20;

    // Binary search using store and compute technique:

    // String the value of the index of the elements first occourence in the ansIndex and set it to -1
    //  which will return -1 if the target is not found
    int ansIndex = -1;
    int ansIndex2 = -1;
    // Function to find first occurence
    ansIndexOfFirstOcc(arr, n, target, ansIndex);
    ansIndexOfLastOcc(arr, n, target, ansIndex2);
    int anss = ansIndexOfTotalOcc(ansIndex, ansIndex2);

    cout << "First Occourence index: " << ansIndex << endl;
    cout << "Last Occourence index: " << ansIndex2 << endl;
    cout << "Total Occourence index: " << anss << endl;

    return 0;
}