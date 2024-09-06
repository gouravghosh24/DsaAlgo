#include <iostream>
using namespace std;

bool isPrimeOneToN(int n){

    if(n==1)return false;
    if(n==2)return true;
    for(int i = 2; i <= n/2; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cin >> n;

    for(int i = 1; i<= n; i++){

        bool isPrime = isPrimeOneToN(i);
        if(isPrime){
            cout << i << " Prime Number!" << endl;
        }
        else{
            cout << i << " Not a Prime Number!" << endl;
        }
    }

    return 0;
}