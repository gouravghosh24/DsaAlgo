#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){

    vector<int> A(5);

    //iota will fill up the range with incremeting values, it fills the elements in starting from a given value consecutively in ascending/descending order
    iota(A.begin(), A.end(), 0);

    //For loop to print the sum 
    for(int b: A){
        cout << b << " ";
    }
}