#include<iostream>
using namespace std;

int main(){



    int arr[3][3] ={
        {10,20,100},
        {30,40,200},
        {50,60,300}

    };
    int r =3;
    int c =3;
    for(int i = 0; i <c; i++){
        for(int j =0; j <r; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}