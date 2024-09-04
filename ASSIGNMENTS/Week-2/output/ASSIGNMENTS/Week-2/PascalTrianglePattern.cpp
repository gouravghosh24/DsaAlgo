/*
    Pascal Triangle Pattern - Refer copy page 40-41 dry run

        1 
        1 1 
        1 2 1 
        1 3 3 1 
        1 4 6 4 1 
        1 5 10 10 5 1 
        1 6 15 20 15 6 1 

*/

#include <iostream>
using namespace std;

void solve() {
    
}

int main() {
    
    int n = 7;
    for(int i = 1; i<=n; i++){

        int C = 1;
        for(int j = 1; j<=i; j++){

            cout << C << " ";
            C = C * ( i - j ) / j;
        //      1 * ( 1 - 1)/ 1 = 0 - First iteration i = 1, j = 1;
        }
        cout << endl;
    }

    return 0;
}