/*
    Given a number N and a value K. From the right, set the Kth bit in the binary representation of N. 
    The position of Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on.
    Input:
    N = 10
    K = 2
    Output: 14 

    Explanation:
    Binary representation of the given number
    10 is: 1 0 1 0, number of bits in the 
    binary reprsentation is 4. Thus 2nd bit
    from right is 0. The number after changing
    this bit to 1 is: 14(1 1 1 0).

    or
    N = 15
    K =  3
    Output: 15

    Explanation:
    The binary representation of the given
    number 15 is: 1 1 1 1, number of bits
    in the binary representation is 4. Thus
    3rd bit from the right is 1. The number
    after changing this bit to 1 is
    15(1 1 1 1).

    Or refer copy page 52-53
    
*/

#include <iostream>
using namespace std;

int main()
{
    // N here is the input value 10 or 15
    int N;
    // K here is also the input value 2 or 3
    int K;
    cin >> N >> K;
    // We are creating a mask variable to left and store the value 
    // // so 0010 << 1 = 0100 = 4
    int mask = 1 << K;

    /*
    
    what this code int ans = N|mask; 
    does is..
    Binary representation of 10: 1010
    Binary representation of 4: 0100
    Performing the bitwise OR operation:
        1010 (10)| 0100 (4) = 1110
    */ 

    int ans = N|mask;
    cout << ans << " ";

    return 0;
}