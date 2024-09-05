#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int temp = 0;
    while(n){
        int digits = n%10;
        //if(temp < INT_MIN/10 || temp > INT_MAX/10) return 0;
        temp = (temp*10)+digits;
        n = n/10;
        
        
    }
    cout << temp;
    return 0;
}