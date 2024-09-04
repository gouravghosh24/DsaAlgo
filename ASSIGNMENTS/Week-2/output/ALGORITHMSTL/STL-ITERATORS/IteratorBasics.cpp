#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    //initialising an Iterator and pointing it to vec.begin() which is the firt element in the container
    vector<int>::iterator it = vec.begin();

    while(it != vec.end()){
        cout << *it << " ";
        it++;
    }
}