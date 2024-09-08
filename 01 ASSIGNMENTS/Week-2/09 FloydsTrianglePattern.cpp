/*
Floyd's Triangle Pattern
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28

*/

#include <iostream>
using namespace std;

int main()
{

    int n = 6;
    // Count is aagined to keep the count of the numbers being printed
    int count = 0;
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            // Here we will only doing a pre increment in count so that,,
            // count can print 1 when count is 0 for the 1st iteration, we are adding 1 and then using it
            // if we use count++ then it is print 0 first and then use the value which is post increment
            ++count;
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}