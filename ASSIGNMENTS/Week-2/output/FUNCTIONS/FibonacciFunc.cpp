//
// Created by goura on 21-06-2024.
//
#include<iostream>
using namespace  std;


int isFibbonaci(int n) {

    int a = 0;
    int b = 1;
    int ans;
    for(int i=0; i <= n; i++) {
        ans = a + b;
        cout << ans << " ";
        a = b;
        b = ans;
    }
}

int main() {
    int n;
    cin >> n;

    cout << isFibbonaci(n);
    return 0;
}