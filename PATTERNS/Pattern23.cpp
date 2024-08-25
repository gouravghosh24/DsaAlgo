//
// Created by goura on 31-05-2024.
//
/*
 *
 Pattern Type:
  1 2 3 4 5 5 4 3 2 1
  1 2 3 4 * * 4 3 2 1
  1 2 3 * * * * 3 2 1
  1 2 * * * * * * 2 1
  1 * * * * * * * * 1
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
  while(j <= n - i + 1){
     cout << j;
     j = j + 1;

  }
  int stars= 1;
  while(stars < i) {
   cout << "*";
   stars = stars + 1;
  }

  int k = n - i + 1;
  while(k) {
   cout << k;
   k = k - 1;

  }
  cout << endl;
  i = i + 1;
 }

 return 0;
}