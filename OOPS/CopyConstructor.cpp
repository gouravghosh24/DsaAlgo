#include <iostream>
#include <string>
using namespace std;

class student
{

public:
    string name;
    int age;
    int id;
    int NoOfSub;

    // creating a parameterised constructor
    student(string name, int age, int id, int NoOfSub)
    {

        // This is point to the current object and fill the values in the attributes
        this->name = name;
        this->age = age;
        this->id = id;
        this->NoOfSub = NoOfSub;
    }

    student(const student &srcobj){

        // This is point to the current object and fill the values in the attributes
        this->name = srcobj.name;
        this->age = srcobj.age;
        this->id = srcobj.id;
        this->NoOfSub = srcobj.NoOfSub;
    }
};


int main(){

    // passing the values to the object
    student A("Gourav Ghosh", 32, 1, 6);
    student B("Himesh Joshi", 22, 2, 7);
    student C("Ranu Mondal", 42, 3, 8);
    student D("Rikta Bose", 18, 4, 5);

    //copying the contruct A attributes and values to constructor c
    student c = A;

    cout << c.name << " " << A.name << " " << endl;

    return 0;
}