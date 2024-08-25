#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    int target = 36;

    // Lower bound will return the itertaor of the target value,
    //  if not found it will return the itertor of the element just greater than the target value
    auto it = lower_bound(arr.begin(), arr.end(), target);
    
    //Here auto it = is the itertaor 

    cout << *it << " ";

    // ++++++++++ Upper Bound code below ++++++++++++++++++++++

    int finds = 40;
    //Upper bound will only return the values greater than the target value even when the target value is present in the vector
    auto ut = upper_bound(arr.begin(), arr.end(), finds);
    cout << *ut << " ";
    
}