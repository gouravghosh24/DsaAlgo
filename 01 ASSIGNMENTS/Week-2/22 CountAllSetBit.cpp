/*
    Find the set bits in the integer and return the number of the set bits in an integer
    Refer page 54-56 on copy
*/

#include <iostream>
#include <cmath>
using namespace std;

int BitwiseMethod(int n)
{

    int count = 0;
    while (n)
    {
        int bits = (n & 1);
        // cout << "n: " << n << ", count: " << count << endl;

        if (bits == 1)
        {
            count += 1;
        }
        n = n >> 1;
    }

    return count;
}

int main()
{

    int n = 15;
    int store = 0;

    int BitwiseFunc = BitwiseMethod(n);
    while (n)
    {
        // We divide n and store the remainder in the bits
        int bits = n % 2;
        // We check if the stored value in bits is 0 or 1
        // if 1 then keep a count of 1's that we are getting
        if (bits == 1)
        {
            store += 1;
        }
        // We again divide n/2 so  by using / for division operation we can get the quotient
        n = n / 2;
    }

    cout << store << endl;

    cout << BitwiseFunc << endl;

    return 0;
}