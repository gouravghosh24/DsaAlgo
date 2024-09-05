
#include<iostream>
using namespace std;

int main() {
    int arr[5]={4, 2, 1, 3, 1};
    int n = 5;
    int ans= 0;
    for(int i = 0; i <n; i++) {

        ans = ans ^ arr[i];

    }
    cout << ans << " " << endl;
    for(int i = 1; i <n; i++) {

        ans = ans ^ i;
    }
        cout << ans << " " << endl;
}
