/*
Fancy Pattern #2
Refer page 34-36 on copy

1
2 * 3
4 * 5 * 6
7 * 8 * 9 * 10
7 * 8 * 9 * 10
4 * 5 * 6
2 * 3
1

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int count = 1;
    cout << endl;

    // Growing phase
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << count;
            count++;
            if(j<i)cout <<"*";
        }
        cout << endl;
    }

    // Shrinking phase
    int start = count - n;
    for(int i = 0; i <n; i++){

        int k = start;
        for(int j = 0; j <= n - i - 1; j++){
            cout << k;
            k++;
            if(j<n-i-1)cout<<"*";
        }
        cout << endl;
        start = start- (n- i - 1);
    }
    

    return 0;
}