#include<iostream>
#include<vector>

using namespace std;



int PrintSumColWise(vector<vector<int>> arr){   
    int rows  = arr.size();
    int cols = arr[0].size();

    for(int j = 0; j < cols; j++){
        int sum = 0;
        for(int i = 0; i < rows; i++){
            sum += arr[i][j];
        }
        cout << sum << endl;
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
    vector<vector<int>> arr(3, vector<int>(3,0));

    TakeInputs(arr);
    PrintSumColWise(arr);
}