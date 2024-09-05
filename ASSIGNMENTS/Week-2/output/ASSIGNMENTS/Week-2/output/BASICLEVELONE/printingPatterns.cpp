/*
    Printing patterns
    Refer page 21 on the copy
*/
#include <iostream>
using namespace std;

int main()
{

     int rows; 
     int cols;
     cin >> rows;
     cin >> cols;

    //Hollow Pattern

    for(int i=0; i <rows; i++){

        for(int j = 0; j < cols; j++){

            if(i == 0 || i == rows - 1){
                cout << "* ";
            }
            else{
                if(j == 0 || j == cols - 1){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }



    // //Rectange pattern

    // for(int i = 0; i <rows; i++){

    //     for(int j = 0; j<cols; j++){

    //         cout << "* ";
            
    //     }
    //     cout << endl;
    // }




    // //Square patternt
    // // Outer loop
    // for (int i = 0; i <= 4; i++)
    // {

    //     // Inner loops
    //     for (int j = 0; j <= 4; j++)
    //     {

    //         cout << "* ";
    //     }
    //     // Go to the next line after printing 1 row
    //     cout << endl;
    // }

    // return statement to signify the code runs without any issues
    return 0;
}