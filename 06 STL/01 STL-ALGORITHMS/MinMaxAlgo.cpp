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
    
    // finding max and min in vector array and storing them in ans and ans2
    int ans = *max_element(arr.begin(), arr.end());
    int ans2 = *min_element(arr.begin(), arr.end());

    // finding max and min in the stored variables in => ans and ans2 and printing them
    cout << "Max number: " << max(ans, ans2) << endl;
    cout << "Min Number: " << min(ans, ans2);

}