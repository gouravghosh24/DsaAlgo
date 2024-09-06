//
// Created by goura on 27-05-2024.
//
/**
 *
 Pattern Type
 A B C
 B C D
 C D E
 *
 */















#include<iostream>
using namespace std;

int main() {

 int n;
 cin >> n;

 int i = 1;
 while(i <= n) {


    int j = 1;
     char ch = 'A';
     ch = ch + i -1;

     while(j <= n){

         cout << ch << " ";
         j = j + 1;
         ch = ch + 1;

     }
     cout << endl;
     i = i + 1;
 }

 return 0;
}