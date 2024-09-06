#include<iostream>
using namespace std;



int main(){

    int arr[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j<3; j++){
            cout << "Enter the values for ( " << i <<" , " << j <<" )";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for(int rows = 0; rows <3; rows++){
        for(int cols = 0; cols < 3; cols++){
            cout << "{ " << arr[rows][cols] << " }" << " ";
        }
        cout << endl;
    }
    
    return 0;
}