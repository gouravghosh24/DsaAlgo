#include<iostream>
#include<vector>

using namespace std;

int main(){

    // initialising an 1D array
    vector<int> v;
    //pushing elements in the array
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    //checking if the vector is empty using an if else below
    if(v.empty() != true){
    cout << "Size: " << v.size() << " " << endl;
    cout << "First Element: " << v.front() << " " << endl;
    cout << "Last Element: " << v.back() << " " << endl;
    cout << "Capacity: " << v.capacity() << " " << endl;
    }
    else{
        cout << "Empty";
    }
    //for each loop used below:
    for(int i: v){
        cout << "Element present: " << i << " " << endl;
    }
    
    // member function erase to erase the whole array elements from begining till 2nd last element as we have v.end() - 1
    v.erase(v.begin(), v.end()-1);
    cout << "Size after erase " << v.size() << " " << endl;
    // cleaning all the elements in the vector fully
    v.clear();
    // inserting element at a certain index
    v.insert(v.begin(), (404));
    cout << v[0] << endl;

    //creating a new iterator to iterate over the elements
    vector<int>::iterator iti = v.begin();
    while(iti != v.end()){
        cout << *iti << " " << endl;
        iti++;
    }
    

}