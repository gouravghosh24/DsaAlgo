#include<iostream>
using namespace std;

int main(){

    int age = 22;
    (age > 18) ? cout <<"Can Vote!\n" : cout << "Cannot Vote\n";

    int x = 4;
    int y = 3;
    (x > y) ? x = y : x = x;
    cout << x ;
}