/*
Pattern Type: Solid Half Diamond
input: 5
Output:

*
**
***
****
*****
******
*******
********
*******
******
*****
****
***
**
*

*/
// Optimised soloution

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        int cond = 0;
        // if (i < n)
        // { // Condition to print the growing starts upto mid of the whole pattern
        //     cond = i;
        // }
        // else
        // { // Condition to print the below portion after the half of the pyramid here the condition has to shrink to print less starts
        //     cond = n - (i % n) - 2;
        // }
        // ternary operator to define the same above condition
        cond = i < n ? i : n - (i%n) - 2;
        for (int j = 0; j <= cond; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}