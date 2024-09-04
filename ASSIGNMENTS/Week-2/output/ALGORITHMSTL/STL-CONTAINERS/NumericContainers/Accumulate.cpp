#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(11);
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(22);
    arr.push_back(33);

    //accumulate is used to return the sum total of all the numbers

    int ans = accumulate(arr.begin(), arr.end(), 0);

    cout << "Total Sum Accumulated: " << ans;

}