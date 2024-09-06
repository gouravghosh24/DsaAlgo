//
// Created by goura on 09-07-2024.
//
#include<iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int n) {
    int i = 0;
    int j = n - 1;

        while(i < j) {

            if(str[i] == ' ') {
                i++;
                continue;
            }
            if(str[j] == ' ') {
                j--;
                continue;
            }

            if(str[i] == str[j]) {
                cout << "Palindrome!";
                break;
            }
            else {
                cout <<"Not a Palindrome!";
                break;
            }

            i++;
            j--;
        }
    }

int main() {

string str = "12321";
    int n = sizeof(str);


    isPalindrome(str, n);


return 0;
}