#include <iostream>
using namespace std;

int main()
{

    int arr[3][3] = {
        {10, 20, 100},
        {30, 40, 200},
        {50, 60, 300}

    };
    
    //int c = 3;

    for(int i = 0; i < 2; i++){
        for(int j = 2; j >= 0; j--){
            cout << arr[i][j] << endl;
            i++;
        }
    }
    //cout << "Failed!";





    return 0;
}