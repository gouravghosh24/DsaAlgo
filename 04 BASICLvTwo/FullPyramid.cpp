/*
    Full Pyramid : Refer to page no. 166 copy reference
*/
#include <iostream>
using namespace std;

// Pyramid function, this is the power house where the logic is designed  
void FullPyramid(int n){

    // For loop for outer rows 
    for(int row = 0; row < n; row++){

        //for loop for inner rows = j
        // 1. prints the spaces
        for(int col = 0; col < n - row - 1; col++){
            cout << " ";
        }
        // 2. prints the stars
        for(int k = 0; k < row + 1; k++){
            cout << "* ";   
        }
        cout << endl;

    }
}

int main() {

    //N is the size of the pyramid
    int n;
    cin >> n;

    //calling the pyramid function
    FullPyramid(n);
    

    return 0;
}