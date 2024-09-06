#include<iostream>
#include<algorithm>

using namespace std;


int main(){

    string name = "Gourav";

    sort(name.begin(), name.end());

    for(int i: name){
        cout << i << " ";
    }


    return 0;
}