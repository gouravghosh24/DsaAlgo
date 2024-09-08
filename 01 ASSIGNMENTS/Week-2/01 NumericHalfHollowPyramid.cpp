/*
Pattern Type: Numeric Half Hollow Pyramid
user input : 10
Code Prints :
1
12
1 3
1  4
1   5
1    6
1     7
1      8
1       9
12345678910

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    //This is the outer loop to count the rows
    for(int i = 0; i < n; i++){

        // This is the inner loop to  count the coloumns
        for(int j = 0; j <= i; j++){
            // we are using a loop to that we can print the numbers
            if(j == 0 || j == i || i == n - 1){
                // Here we are printing the coloumn + 1 
                cout << j + 1;
            }
            // We use else so that we can print the spaces
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}