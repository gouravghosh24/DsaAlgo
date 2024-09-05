#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(100);
    arr.push_back(200);
    arr.push_back(300);
    arr.push_back(400);
    arr.push_back(500);

    //target is the number you wish to find in the vector array
    int target;
    cin >> target;

    //auto keyword is used to iterate over the array elements the pointer is *it 
    auto it = find(arr.begin(), arr.end(), target);
    cout << "Element: " << *it << " Found!" << endl;
    



}