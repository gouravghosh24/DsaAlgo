#include<iostream>
#include<vector>

using namespace std;

void PrintSumDiagonalWise(vector<vector<int>> &arr){

    int rows = arr.size();
    int cols = arr[0].size();
     int sum = 0;
    for(int i = 0; i < rows; i++){
        sum += arr[i][i];
        sum += arr[i][cols - i - 1];
        
    }
    cout << sum << " " << endl;
    
   
}

int TakeInputs(vector<vector <int>> &arr){
    int rows = arr.size();
    int cols = arr[0].size();
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "Enter your value for " << i << " , " << j << " ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
}

int main(){

    vector<vector<int>> arr(2, vector<int>(2,0));

    TakeInputs(arr);

    PrintSumDiagonalWise(arr);
    return 0;
}