#include<iostream>
#include<vector>
#include<forward_list>
#include<list>

using namespace std;

int main(){

    vector<int> arr = {10,20,30,40,50};

    //create an iterator
    vector<int>:: iterator i = arr.begin();

    //Forward traversing 
    while(i != arr.end()){

        //write
        (*i) = (*i) + 7;
        //Read
        cout << *i << " ";
        //Move Forward
        i++;
    }

    cout << endl;

    //Randomly access an element in the vector

    vector<int>::iterator k = arr.begin() + 2;

    //Backward traversing

    //create an iterator
    vector<int>:: iterator j = arr.end();
    
    //Backward traversing 
    while(i != arr.begin()){

        //Move Backward
        i--;
        //write
        (*i) = (*i) - 7;
        //Read
        cout << *i << " ";
        
        
    }

    cout << endl << (*k + 5) << " ";


    return 0;
}