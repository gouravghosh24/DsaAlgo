#include<iostream>
#include<vector>
#include<forward_list>

using namespace std;

int main(){

    forward_list<int> arr;
    arr.push_front(10);
    arr.push_front(20);
    arr.push_front(30);

    //creating an iterator
    forward_list<int>:: iterator it = arr.begin();

    while(it != arr.end()){
        //incrementing the values in the container by +5
        *it = (*it) + 5;
        it++;
    }

    //pointing the itertor *it to the first element once again
    it = arr.begin();

    // While loop to print the elements 
    while(it != arr.end()){
        cout << *it << " ";
        it++;
    }

}