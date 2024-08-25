#include<iostream>
#include <vector>

using namespace std;

//Function to check if the target variable is present in the vector
bool FindTragetVector(vector<vector <int>> &arr, int target){

    
    int rows = arr.size();
    int cols = arr[0].size();

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == target){
                return true;
                cout << " Element you are tryinng to search is preset @ " << i << " , " << j << endl;
            }
        }
    }
    return false;
}

//Function to take in input
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
    vector<vector<int>> arr (2, vector<int>(2,0));
    int target;

    //Function to take inputs
    TakeInputs(arr);

    //Taking value from the user input
    cout << "Enter the target to Find: ";
    cin >> target;

    // Storing the fucntion returns on checker which is a bool variable && FindTragetVector is a function to find the target value
    bool checker = FindTragetVector(arr, target);
    // If else statement used to check the function return condition and print the output
    if(checker == true){
        cout << "Whoalla!" << endl;
    }
    else if(checker != true){
        cout << "Ahh Crash!" << endl;
    }
    return 0;
}