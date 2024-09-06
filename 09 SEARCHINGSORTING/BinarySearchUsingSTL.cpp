#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = 9;
    int target = 70;

    // in-built function to implement binary search
    int ans = binary_search(arr, arr + n, target);

    cout << ans << endl;

    // Finding the index of the target value
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {

        if (target == arr[mid])
        {
            cout << mid << endl;
            break;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    
    return 0;
}