//
// Created by goura on 18-06-2024.
//
#include<iostream>
using namespace  std;
int  IsEven(int n) {
    int ans = n % 2;
    if(ans == 0) {
        cout << "Even Number";
    }
    else {
        cout <<  "Odd number";
    }

}
int main() {

    int num;
    cin >> num;
    IsEven(num);
    return 0;
}