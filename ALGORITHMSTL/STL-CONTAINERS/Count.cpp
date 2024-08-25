#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(11);
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(22);
    arr.push_back(33);

    //target element is the element that we wish to find the occourence of
    int target = 11;

    //count is used to find the number of times of the occourence if the target element in the vector array
    int ans = count(arr.begin(), arr.end(), target);

    cout << "Element present " << ans << " times" << endl;

}