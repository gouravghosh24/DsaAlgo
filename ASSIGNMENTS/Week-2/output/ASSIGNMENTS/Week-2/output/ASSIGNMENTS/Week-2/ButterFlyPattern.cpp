/*
    Butterfly Pattern
    Refer copy page - 42-45

        *        *
        **      **
        ***    ***
        ****  ****
        **********
        **********
        ****  ****
        ***    ***
        **      **
        *        *
*/

#include <iostream>
using namespace std;

int main()
{

    int n = 20;

    // Outer loop
    for (int i = 0; i < 2 * n; i++)
    {

        // Condition
        int cond = i < n ? i : n+(n-i-1);
       // cout << "N" << n << " " <<"I" <<i <<" " << cond <<" ";
        

        // Condition for spaces
        int space_count = i < n ? 2 * (n - cond - 1) : (i-cond-1);

        // inner loop
        for (int j = 0; j < 2 * n; j++)
        {
            // Condition to print starts
            // It will only print 2 starts in the first iteration
            // * printed until j(0) <= cond(0) -> First row
            if (j <= cond)
            {
                cout << "*";
            }
            // Condition to print the spaces
            // 
            else if (space_count > 0)
            {
                cout << " ";
                space_count--;
            }
            else{
                cout <<"*";
            }
        }
        cout << endl;
    }

    return 0;
}
