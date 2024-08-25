//
// Created by goura on 24-05-2024.
//
// Created by goura on 24-05-2024.
/*
Patter Type:
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

 */

#include <iostream>
using namespace std;


int main()
{

    int n;
    cin >> n;
    int rows = 1;
    while (rows <= n)
    {
        int cols = 1;
        // v is used to update the values of rows so that we can use it(v) to print the rows accordingly
       // int v = rows;
        while (cols<=rows)
        {
            cout << rows+cols-1 << " ";
            // incrementing the values of v which in other ways is the values of the rows
        //    v = v + 1;
            cols = cols + 1;
        }
        cout << endl;
        rows = rows + 1;
    }

    return 0;
}