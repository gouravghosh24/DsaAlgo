#include<iostream>
#include <vector>

using namespace std;

int PrintSumRowWise(vector<vector<int>> &arr){
    
    int rows = arr.size();
    int cols = arr[0].size();


    for(int i = 0; i <  rows; i++){
        int sum = 0;
        for(int j = 0; j < cols; j++){
            sum += arr[i][j];
        }
        cout << "Sum of Row " << i << " " << sum;
        cout << endl;
    }
    
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

    vector<vector<int>> arr(3, vector<int>(3, 0));
    

    TakeInputs(arr);
    PrintSumRowWise(arr);
    return 0;
}