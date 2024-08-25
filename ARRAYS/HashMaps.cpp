//
// Created by goura on 29-06-2024.
//
#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, int> mp;
    int n = mp.size();

    for(int i=0; i<3; i++) {
        cin >> mp[i];
        mp[n] = mp[i];
    }
    if(mp[0] == mp[1]) {
        cout << mp[1];
    }
else {
    cout << mp[0];
}
    return 0;
}