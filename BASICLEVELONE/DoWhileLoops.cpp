/*
    Do while Loop and Nested Loops
    Refer page 20 on the copy

*/
#include <iostream>
using namespace std;

int main()
{

    // in Do while the loop will execute for the first time irrespective of any conditions

    int i = 1;

    do
    {

        // Below condition will nun first anyhow
        cout << i << " ";
        i++;
    }
    // after the first condition now the condition will be check while() the it is return the do section of the code
    while (i <= 5);
    cout << endl;

    /*
        Nested loop : the code will print
        Outer: 0  Inner: 0
        Outer: 1  Inner: 0
        Outer: 1  Inner: 1
        Outer: 2  Inner: 0
        Outer: 2  Inner: 1
        Outer: 2  Inner: 2
    */

    for (int outer = 0; outer <= 2; outer++)
    {
        for (int inner = 0; inner <= outer; inner++)
        {
            // Inner loop will print until the conditions are satisfied hence inner loop will run until it exceeds outer loop value
            cout << "Outer: " << outer << " - " << "Inner: " << inner << endl;
        }
    }

    return 0;
}