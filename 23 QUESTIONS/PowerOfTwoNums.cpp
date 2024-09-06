//
// Created by goura on 18-06-2024.
//
#include<iostream>
using namespace  std;

int Power(int a, int b) {
        int ans = 1;
        for(int i =1; i<=b; i++) {
            ans = ans * a;
        }
        cout << "The Power of "<< a << " to the power " << b << " is " << ans;
}
int main() {

    int a, b;
    cout << "Enter A:  ";
    cin >> a;
    cout << endl;
    cout << "Enter B:  ";
    cin >> b;
    cout << endl;
    Power(a, b);
    return 0;
}