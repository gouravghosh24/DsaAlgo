#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr(6);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;

    cout << "Elements before Reversing: " << endl;

    //we are using a for loop to iterate over the vector array
    for(int a: arr){
        cout << a << " ";
    }

    //rotate the vector array elements in the array
    rotate(arr.begin(), arr.begin()+3, arr.end());

    cout << endl << "Elements After Reversing: " << endl;

    //we are using a for loop to iterate over the vector array
    for(int a: arr){
        cout << a << " ";
    }

}