/*
    Prime Number or Not
*/

#include <iostream>
using namespace std;

bool isPrime(int n){

    if(n<=1) return false;
    if(n==2) return true;
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            return false;
        }
        
    }
    return true;
}

int main(){

    int n;
    cin >> n;

    bool checker = isPrime(n);
    if(checker){
        cout << "Prime!" << endl;
    }
    else{

        cout << "Not a prime!" << endl;
    }
    

    return 0;
}