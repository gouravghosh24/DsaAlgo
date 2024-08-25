#include<iostream>
// Defination of Vectors
#include <vector>
//To define INT_MAX
#include <climits>


using namespace std;
int FindTheMinValue(vector<vector<int>> &arr){

    int min = INT_MAX;
    int rows = arr.size();
    int cols = arr[0].size();

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] < min){
                min = arr[i][j];
                
            }
        }
    }

    return min;
}
int FindTheMaxValue(vector<vector<int>> &arr){

    int max = INT_MIN;
    int rows = arr.size();
    int cols = arr[0].size();

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                
            }
        }
    }

    return max;
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

    vector<vector <int>> arr(2, vector<int>(2,0));
    
    
    TakeInputs(arr);
    int Min = FindTheMinValue(arr);
    int Max = FindTheMaxValue(arr);
    cout << "The minimum value found in the Vector is:  " << Min << endl;
    cout << "The maximum value found in the Vector is:  " << Max << endl;
    return 0;
}