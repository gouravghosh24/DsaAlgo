//
// Created by goura on 04-06-2024.
//
#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    bool Prims = true;
    for(int i = 2; i < n; i++) {

        if(n%i==0) {
            Prims = false;
            break;
        }
    }
    if(Prims == 0) {
        cout << "Not a Prime Number!" << endl;
    }
    else {
        cout << "Prime Number!" << endl;

    }
    return 0;
}