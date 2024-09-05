#include<iostream>
#include<vector>
#include<forward_list>
#include<list>

using namespace std;

int main(){

    list<int> MyList;
    MyList.push_front(10);
    MyList.push_front(20);
    MyList.push_front(30);

    //Traverse the list
    list<int>::iterator i = MyList.begin();

    while(i != MyList.end()){

        //Incrementing the values by +2
        (*i) = (*i)+2;
        //output/reading the values 
        cout << *i << " ";
        i++;
    }

    //Creating an iterator to move backwards in the list and print elements
    list<int>::iterator j = MyList.end();

   // Travrsing the elements backwards  
    while(j != MyList.begin()){
        
        //first we will have to move the pointer to the n - 1 node on the list
        j--;
        cout << *j << " ";
        
    }



    return 0;
}