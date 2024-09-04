//
// Created by goura on 27-05-2024.
//
/*
 *
 Pattern Type
 A
 B B
 C C C
 *
 */















#include<iostream>
using namespace std;

int main() {

 int n;
 cin >> n;
 int i = 1;
 char ch = 'A';
 while(i <= n) {

  int j = 1;

  while(j <= i){
     cout << ch << " ";
     // OR
    // char ch = 'A' + i -1;
   // cout << ch << " ";

     j = j + 1;
  }
  cout << endl;
  i = i + 1;
  ch = ch + 1;


 }

 return 0;
}