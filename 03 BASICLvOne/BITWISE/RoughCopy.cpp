//
// Created by goura on 04-06-2024.
//
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    int ans = 0;
    while(n!=0) {
        int bits = n % 10;
        if(bits == 1) {
            ans = (ans + pow(2, i));
        }
        n = n / 10;
        i++;
    }
    cout << ans;
    return 0;
}