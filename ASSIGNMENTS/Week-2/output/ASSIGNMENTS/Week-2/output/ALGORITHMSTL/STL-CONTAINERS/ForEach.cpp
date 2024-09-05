#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void PrintDouble(int a){
    cout << "Element "<< a << " * 2:  " << 2*a << " " << endl;
}
int main(){

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    // for each is used to iterate over the elements in a range and perform the multiplication operations 
    for_each(arr.begin(), arr.end(), PrintDouble);

}