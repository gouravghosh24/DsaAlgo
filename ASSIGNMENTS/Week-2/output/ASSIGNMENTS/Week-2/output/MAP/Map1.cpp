#include<iostream>
#include<map>

using namespace std;

int main(){

    //creting a map
    map<int, string> emp;
    
    //Inserting values in the map
    emp[1] = "Gourav Ghosh";
    emp[2] = "Rajesh Mittal";
    emp[3] = "Mahesh Jaiswal";


    //We can also insert the values using insert() method
    emp.insert(make_pair(4, "Rajesh sharma"));

    //creating an iterator, *it is the iterator that points to the current key-value pair in the map

    map<int, string>:: iterator it = emp.begin();

    while(it != emp.end()){
        // P here is a pair object named p and assigns it the value pointed to by the iterator it.
        pair<int, string> p = *it;
        cout << p.first << " " << p.second << " " << endl;
        it++;
    }

    //we can also access the elements and print the values present 
    cout << emp[1] << " " << emp[2] << " " << emp[3] << " " << emp[4] << endl;




}