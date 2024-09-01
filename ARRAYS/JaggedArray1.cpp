// Jagged Array using vectors

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Creating a vector of integer elements present in it name arr and size 4
    vector<vector<int>> arr(4);

    // Inserting cols in the vector so that we can insert elements in the vector array starting from 0th index till 3rd index

    // row 0 has 4 cols
    arr[0] = vector<int>(4);
    // row 1 has 2 cols
    arr[1] = vector<int>(2);
    // row 2 has 5 cols
    arr[2] = vector<int>(5);
    // row 3 has 3 cols
    arr[3] = vector<int>(3);

    // inserting values in the Vector array

    arr[0] = vector<int>(4); // adding elements to the vector vector at row 0 and cols 0 - 3 as we have the size as 4
    arr[0][0] = 2;
    arr[0][1] = 1;
    arr[0][2] = 3;
    arr[0][3] = 4;

    arr[1] = vector<int>(2); // adding elements to the vector vector at row 1 and cols 0 - 1 as we have the size as 2
    arr[1][0] = 21;
    arr[1][1] = 22;

    arr[2] = vector<int>(5); // adding elements to the vector vector at row 2 and cols 0 - 4 as we have the size as 5
    arr[2][0] = 32;
    arr[2][1] = 31;
    arr[2][2] = 33;
    arr[2][3] = 34;
    arr[2][4] = 35;

    arr[3] = vector<int>(3); // adding elements to the vector vector at row 3 and cols 0 - 2 as we have the size as 2
    arr[3][0] = 42;
    arr[3][1] = 41;
    arr[3][2] = 43;


    // We can also use the push_back() method to add elements
    // You will find that the vector will double the size and take all the inputs
    arr[0].push_back(1);
    arr[0].push_back(2);
    arr[0].push_back(3);
    arr[0].push_back(4);

    arr[1].push_back(5);
    arr[1].push_back(6);

    arr[2].push_back(7);
    arr[2].push_back(8);
    arr[2].push_back(9);
    arr[2].push_back(10);
    arr[2].push_back(11);

    arr[3].push_back(12);
    arr[3].push_back(13);
    arr[3].push_back(14);

        // initialising an iterator to iterate over the array
    vector<vector<int>>::iterator it = arr.begin();

    while (it != arr.end())
    {
        // we simply cannot print the inner vectors as we have created a vector of vectors so we will have to iterate over the inner vectors as well
        vector<int> InnerVector = *it;
        for (int i = 0; i < InnerVector.size(); i++)
        {
            cout << InnerVector[i] << " ";
        }
        cout << endl;
        it++;
    }

    /*
    // If we use the iterator loop it will give us error in output and garbage values hence not recommended
     int size = arr.size();
     for(int i = 0; i < size; i++){
         for(int j  = 0; j < size; j++){
             cout << arr[i][j] << " ";
         }
         cout << endl;
     }

    */

    return 0;
}