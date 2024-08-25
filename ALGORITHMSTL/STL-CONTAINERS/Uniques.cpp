#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr(5);
    arr[0] = 11;
    arr[1] = 11;
    arr[2] = 22;
    arr[3] = 22;
    arr[4] = 33;

    //Unique is used to find the unique element in the vector array
    auto it = unique(arr.begin(), arr.end());
    cout << *it << " ";
}