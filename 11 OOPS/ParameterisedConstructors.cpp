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
};

int main()
{

    // passing the values to the object
    student A("Gourav Ghosh", 32, 1, 6);
    student B("Himesh Joshi", 22, 2, 7);
    student C("Ranu Mondal", 42, 3, 8);
    student D("Rikta Bose", 18, 4, 5);

    int TargetId;
    cout << "Enter the target Id you wish to serach!" << endl;
    cin >> TargetId;

    // if condition is used to check the target id's and print the values of the student as per the id

    if (A.id == TargetId)
    {

        cout << "Name: " << A.name << " " << endl;
        cout << "Age: " << A.age << " " << endl;
        cout << "Id: " << A.id << " " << endl;
        cout << "No of Subjects: " << A.NoOfSub << " " << endl;
    }
    else if (B.id == TargetId)
    {
        cout << "Name: " << B.name << " " << endl;
        cout << "Age: " << B.age << " " << endl;
        cout << "Id: " << B.id << " " << endl;
        cout << "No of Subjects: " << B.NoOfSub << " " << endl;
    }
    else if (C.id == TargetId){
        cout << "Name: " << C.name << " " << endl;
        cout << "Age: " << C.age << " " << endl;
        cout << "Id: " << C.id << " " << endl;
        cout << "No of Subjects: " << C.NoOfSub << " " << endl;
    }
    else if(D.id == TargetId){
        cout << "Name: " << D.name << " " << endl;
        cout << "Age: " << D.age << " " << endl;
        cout << "Id: " << D.id << " " << endl;
        cout << "No of Subjects: " << D.NoOfSub << " " << endl;
    }
    else
    {
        cout << "Invalid Data!" << endl;
    }

    return 0;
}