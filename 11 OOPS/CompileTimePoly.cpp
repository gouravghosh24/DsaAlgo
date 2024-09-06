#include<iostream>
using namespace std;

class Add{

    //Same method calls but different arguments
    public:
    void sum(int x, int y){
        cout << "Sum of 2 ints: " << x+ y << endl;
    }
    void sum(int x, int y, int z){

        cout << "Sum of 3 ints: " << x + y + z << endl;
    }

    void sum(double x, double y){

        cout << "Sum of 2 Doubles: " << x + y << endl;
    }

};

int main(){

    int x = 2;
    int y = 3;
    int z = 4;
    //Calling the Add class
    Add adds;
    
    //calling the methods in the class
    adds.sum(x, y);
    adds.sum(x, y, z);
    adds.sum(1.2, 1.3);

    return 0;
}