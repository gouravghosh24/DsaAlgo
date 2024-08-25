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

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        int spaces = n - i + 1;
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        int spaces2 = i - 1;
        for (int l = 1; l < i; l++)
        {

            cout << spaces2;
            spaces2--;
        }

        cout << endl;
    }

    return 0;
}