#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool CheckEven(int a)
{

    return a % 2 == 0;
}
int main()
{

    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 13;
    arr[4] = 14;

    // Partion will create a partition between the even numbers and odd number and arrange it in the sorted way
    // as we have passed a function to check the even numbers
    auto it = partition(arr.begin(), arr.end(), CheckEven);

    //count_if will check the number of even numbers in this vector array and return the count of the even numbers as per the criteria 
    auto ct = count_if(arr.begin(), arr.end(), CheckEven);

    cout << ct << " " << endl;

    for (int a : arr)
    {
        cout << a << " ";
    }
}