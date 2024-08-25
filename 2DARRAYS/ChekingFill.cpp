#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int arr[2][2] = {
        {1, 3},
        {2, 3}

    };
    // We will have to write a pointer to point to the first index of the 2D array
    int* arrPtr = &arr[0][0];

    fill(arrPtr + 1, arrPtr + 3, 5);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}