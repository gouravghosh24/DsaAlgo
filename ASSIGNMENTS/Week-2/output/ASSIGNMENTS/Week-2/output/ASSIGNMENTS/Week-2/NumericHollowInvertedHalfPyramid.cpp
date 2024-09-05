/*
Pattern Type : Numeric Hollow Inverted Half Pyramid
User Input : 5
Output:
1 2 3 4 5
2   5
3  5
4 5
5

*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    for(int rows = 1; rows <= n; rows++){
        int cols = rows;
        for(; cols<=n; cols++){
            if(rows == 1 || rows >= cols || cols == n){
                cout << cols << " ";
            }
            else{
                cout << " ";
            }
            
        }
        cout << endl;
    }
    

    return 0;
}