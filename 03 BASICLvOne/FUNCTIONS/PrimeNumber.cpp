//
// Created by goura on 19-06-2024.
//
#include<iostream>
using namespace  std;

bool isPrime(int n) {

    for(int i =2; i < n; i++) {
        if(n%i ==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int b;
    cin >> b;
    if(isPrime(b) != 0) {
        cout << "Prime";
    }
    else if(isPrime(b) == 0){

        cout << "not Prime";
    }

}