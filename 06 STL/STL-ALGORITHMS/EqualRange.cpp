#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(20);
    arr.push_back(20);
    arr.push_back(30)
    ;
    int target = 20;

    auto range = equal_range(arr.begin(), arr.end(), target);

    cout << "Lower Bound: " << *range.first << endl;
    cout << "Upper Bound: " << *range.second << endl;

}