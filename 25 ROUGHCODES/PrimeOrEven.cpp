//
// Created by goura on 24-05-2024.
//
#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 2;

    while(i<=n){
        cout << i << " " << n << " ";
        if(n%i==0){
            cout << "Not Prime for: " << i << endl;
        }
        else{
            cout << "Prime for: " << i << endl;
        }
        i = i+1;
    }




    return 0;
}