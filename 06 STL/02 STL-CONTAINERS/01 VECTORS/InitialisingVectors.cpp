#include<iostream>
#include <vector>

using namespace std;

int main(){

    vector<vector<int>> arr (4, vector<int> (4, 2));
    int rows = arr.size();
    int cols = arr[0].size();

    for(int i =0; i < rows; i++){
        for(int j =0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }    


    return 0;
}