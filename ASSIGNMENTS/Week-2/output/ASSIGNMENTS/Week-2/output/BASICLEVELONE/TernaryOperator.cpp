/*
Ternary Operator refer page 18 copy
*/
#include<iostream>
using namespace std;

int main(){

    int age = 22;
    (age > 18) ? cout <<"Can Vote!\n" : cout << "Cannot Vote\n";

    int x = 4;
    int y = 3;
    int result = (x > y) ? x = y : x = x;
    cout << result ;
}