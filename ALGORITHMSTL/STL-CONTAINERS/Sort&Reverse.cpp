#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(11);
    arr.push_back(40);
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(12);

    cout << "Elements before sorting: " << endl;

    //we are using a for loop to iterate over the vector array
    for(int a: arr){
        cout << a << " ";
    }

    //Sort will help us to arrange the vector in a ascending/descending order in  a sorted way
    sort(arr.begin(), arr.end());
    
    cout << endl << "Elements after sorting: " << endl;

    //we are using a for loop to iterate over the vector array
    for(int a: arr){
        cout << a << " ";
    }

    cout << endl << "Elements after Reversing: " << endl;

    // reverse is used to reverse the vector elements
    reverse(arr.begin(), arr.end());

    //we are using a for loop to iterate over the vector array
    for(int a: arr){
        cout << a << " ";
    }




}