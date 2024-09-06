#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//function is created to check if the element is even or not and it is return the even number
bool checkEven(int a){
    return a%2 == 0;
}

int main(){

    //vector of elements 
    vector<int> arr;
    
    //pushing the elements in the vector
    arr.push_back(11);
    arr.push_back(23);
    arr.push_back(30);

    // We will iterate over the items and find the Even number
    auto it = find_if(arr.begin(), arr.end(), checkEven);
    cout << "Element " << *it << " is an Even number " << endl;

}