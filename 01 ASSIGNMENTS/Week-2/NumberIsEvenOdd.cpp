/*
    Check if the number is Even or Odd
    Refer page 48 on the copy
*/
#include <iostream>
using namespace std;

bool EvenOrOdd(int n){

    int ans;
    ans = n%2;
    
    return ans;
    
}

bool BitwiseEvenOdd(int n){

    int anss;
    anss = n&1;
    return anss;
}

int main() {
    int n;
    cin >> n;

    bool check = EvenOrOdd(n);
    if(check == 0){
        cout << "Even Number!" << endl;
    }
    else{
        cout << "Odd Number!" << endl;
    }

    bool BitwiseCheck = BitwiseEvenOdd(n);
    if(BitwiseCheck==0){
        cout <<"Bitwise Check Num is Even!";
    }
    else{
        cout <<"Bitwise Check Num is Odd!";
    }

    return 0;
}
