//
// Created by goura on 21-06-2024.
//
#include <iostream>
using namespace std;
int isArrays(int arr[], int n)
{

    for (int i = 0; i <= n; i++)
    {
        arr[i] = i;
        cout << " Array elements: " << arr[i] << endl;
    }
}

int main()
{

    int n;
    int a[10] = {};
    int b[15] = {};

    n = 10;
    isArrays(a, 10);
    cout << isArrays;
    int asize = sizeof(a, 10) / sizeof(int);
    cout << asize << endl;

    n = 15;
    isArrays(b, 15);
    cout << isArrays;
    int bsize = sizeof(b, 15) / sizeof(int);
    return 0;
}