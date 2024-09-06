//
// Created by goura on 06-06-2024.
// Integer to Binary printing

#include<iostream>
//Math function used from the header library
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    //initialising the ans to store the bits that are to be printed
    int ans = 0;
    //power initialisation
    int i = 0;
    // While loop to check in the number is not a 0 so that we can access the bits
    while(n!=0) {

        // We initialised digits to add 1 with the last bit as & will add 1 with the last binary bit
        int digits = n&1;

        // Here we are storing the value
        // digits  is the last binart bit of the Nth number
        // we are using math.h pow() function to calculate the power
        // We are also adding it with ans which is 0 for the first iteration
        ans = (digits * pow(10, i))+ ans;

        // We are now right shifting the last bit by 1
        n = n >> 1;
        // We also need to incarease the power which is why we have written i++
        i++;
    }

    // Finally we are printing out the ans stored= it will return us the binary representation of the Nth number
    cout << ans << endl;
    return 0;
}

//Code ends here!