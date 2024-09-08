/*
Pattern Type: Numeric Palindrome Equilateral Pyramid
input: 5
Output:
                1
            1   2   1
        1   2   3   2   1
    1   2   3   4   3   2   1
1   2   3   4   5   4   3   2   1


*/
// Optimised soloution 

#include <iostream>
using namespace std;

int main()
{
    // int n = number of rows you wish to print
    int n;
    // input from user for number of rows
    cin >> n;
    // initialising n to k so that we can print other half of the pyramid
    int k = n;

    // first loop i for the rows
    for (int i = 0; i < n; i++)
    {
        // initialising a so that we can print the numbers and increment it
        int a = 1;

        // second loop j if for the coloumns
        for (int j = 0; j < k; j++)
        {
            // if j less than n - i - 1 for the first rows i= 0, n = 5, so j < 5- 0- 1 = 4, 
            // print spaces upto 0 to 3 indexes which is 4 places
            // 
            if (j < n - i - 1)
            {
                cout << " ";
            }
            // else if j < n - 1 = j < 5 -1 = 4, print a which is 1 at this point and increase a++
            else if (j <= n - 1)
            {

                cout << a;
                a++;
            }
            // Now this is for the second half of the pyramid
            // if j > n - 1 => j > 5 - 1 = j > 4 
            //decrease the value of a as a's current value is 3 so we have to do a, a - 2 to make it 1
            // then increase a once again
            else if (j > n - 1)
            {
                a = a - 2;
                cout << a;
                a++;
            }
        }

        // k is incremented so that we can print the second half of the pyramid
        // k = n which is 5 initially, so  we have to increase k to reach the 6th index
        k++;
        cout << endl;
    }

    return 0;
}