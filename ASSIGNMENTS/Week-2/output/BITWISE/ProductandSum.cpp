//
// Created by goura on 06-06-2024.
//
// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number to calculate the difference between the product of its digits and the sum of its digits: ";
    cin >> n;

    int prod = 1;
    int sum= 0;
    while(n!=0) {
        // Digits is an integer that is used to break the nth value and only return the last digit of the n value input by the user, n % 10 = returns the remainder only
        int digits = n%10;

        // Here we are multiplying and adding the digits
        prod = prod * digits;
        sum = sum + digits;
        // we are now breaking the last bits of the nth value by dividing it with 10
        n = n/10;
    }
    // We have calculatd the product and sum of the given numbers, now we will just subract the numbers and print the output
    int answers = prod - sum;
    cout << endl;
    cout << "The returned diffrence is:  " << answers;

    return 0;

}