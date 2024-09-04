#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Class to write a functor
class CustComp{

    public:
    //Functor to sort the vector in descending order
    bool operator()(int a, int b){

        return a > b;
    }
};


int main(){

    // Vector array if integers 
    vector<int> arr;

    //Pushing Elements in the Vector array
    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(15);

    //Sorting the Vector in descending order by calling the CustComp class method/Functor
    sort(arr.begin(), arr.end(), CustComp());

    //For loop to print the Vector array elements
    for(int a: arr){
        cout << a << " ";
    }

    return 0;
}