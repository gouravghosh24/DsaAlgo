#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);

    //Creating a max heap 
    make_heap(arr.begin(), arr.end());

    //This is push the element to the vector directly and not the heap
    arr.push_back(99);
    // To be able to push the element in the heap will have to run a func push_heap()
    push_heap(arr.begin(), arr.end());

    //Sort the heap 
    sort_heap(arr.begin(), arr.end());

    //itertaor to print the values
    for(int a : arr){
        cout << a << " ";
    }

    //++++++++++++++++ Deletion Popping of elements +++++++++++++

    //it will delete the element from the heap only not the vector
    pop_heap(arr.begin(), arr.end());
    //This is delete the element from the vector 
    arr.pop_back();

    cout << endl << "After Popping: " << endl;

    //itertaor to print the values
    for(int a : arr){
        cout << a << " ";
    }
    






}