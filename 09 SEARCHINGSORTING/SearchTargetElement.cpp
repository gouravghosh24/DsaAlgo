#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr;

    arr.push_back(10);
    arr.push_back(55);
    arr.push_back(57);
    arr.push_back(82);
    arr.push_back(101);
    arr.push_back(204);

    int n = arr.size();
    cout << "The Vector Elements are: ";
    for (int printVec = 0; printVec < n; printVec++)
    {

        cout << arr[printVec] << " |";
    }

    int start = 0;
    int end = n - 1;
    int target;
    bool found;
    // Ask for user input for the target element to search?
    cout << endl
         << "Enter the Target Element to find the index of: ";
    cin >> target;

    // We will now perform a binary search:
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            cout << "The Index of the element is: " << mid;
            found = true;
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
    }
    if(!found)
        {

            cout << "Element not found! " << endl;
        }

    return 0;
}