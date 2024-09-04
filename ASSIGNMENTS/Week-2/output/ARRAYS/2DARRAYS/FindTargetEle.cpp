#include<iostream>
using namespace std;

int FindTargetEle(int arr[][4], int rows, int cols, int target){
    bool b = 0;
    for(int i =0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j]== target){
                b = 1;
                cout << "Element " << target << " is preset at: " << rows << " , " << cols << endl;
            }
            
        }

    }
    return b;
}

int main(){

    int arr[3][4]{
        {10,20,30,40},
        {50,55,57,59},
        {69,72,79,89}
    };
    int rows = 3;
    int cols = 4;
    int target;
    
    cout << "Enter what you wish to find: " << endl;
    cin >> target;
    
    bool checker = FindTargetEle(arr, rows, cols, target);
    if(checker == 1){
        cout << "Found" << endl;
    }
    else if(checker != 1){
        cout << "Sorry invalid search!" << endl;
    }


    return 0;
}