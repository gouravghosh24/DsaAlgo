#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    // Another Vector was created to store the output results of the partial sums in 'n'
    vector<int> n(arr.size());
    // Partial sum is the function to calculate the sum of the vector array within a given range Begin()-End() and store it in n.begin()/n
    partial_sum(arr.begin(), arr.end(), n.begin());

    for (int a : n)
    {
        cout << a << " ";
    }
}