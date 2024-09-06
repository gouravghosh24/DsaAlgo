#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){

    //Vector 1
    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);

    //Vector 2
    vector<int> sec;
    sec.push_back(3);
    sec.push_back(4);
    sec.push_back(5);

    //Inner product is used to compute the patial sum of a range
    int ans = inner_product(first.begin(), first.end(), sec.begin(), 0);
    cout << ans << endl;
}