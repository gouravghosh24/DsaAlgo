#include<iostream>
using namespace std;

/* To refer follow page 14-15 on copy*/

int main(){

    int budget;
    cin >> budget;

    if(budget > 20)
    {
        cout << "You can buy copy! " << endl;
    }
    else if(budget > 10)
    {
        cout << "buy in EMI's! " << endl;
    }
    else
    {
        cout << "you cannot Buy! " << endl;
    } 

    // Nested if's
    int height;
    int weight;
    cin >> height;
    cin >> weight;

    if(height > 5)
    {
        if(weight > 70)
        {
            cout << "Good!";
        }
        else
            {
                cout << "improve!";
            }
    }
    else{
        cout << "Need to check in Physic!";
    }

    

    return 0;
}