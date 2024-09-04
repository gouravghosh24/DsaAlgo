#include <iostream>
#include <string>
using namespace std;

// Student class is created below
class student
{
    // default constructor
public:
    student()
    {
        cout << "Constructor called!" << endl;
    }

    // public variables
public:
    string name;
    int rollNo;

    // private variables
private:
    int age;
    string Cnumber;
    float cgpa;

    // Creating getter and setter methods

public:
    void Setage(int a)
    {

        this->age = a;
    }
    void SetCnumber(string a)
    {

        this->Cnumber = a;
    }
    void Setcgpa(float a)
    {

        this->cgpa = a;
    }

    void Getage()
    {

        cout << "Age of the Student: " << this->age << " " << endl;
    }
    void GetCnumber()
    {
        cout << "Contact Number: " << this->Cnumber << " " << endl;
    }
    void Getcgpa()
    {

        cout << "Cgpa of the Student: " << this->cgpa << " " << endl;
    }

    // Parameterised Constructor created below::
    student(string name, int rollNo, int age, string Cnumber, float cgpa)
    {

        // adding values to the variables
        this->name = name;
        this->rollNo = rollNo;
        this->age = age;
        this->Cnumber = Cnumber;
        this->cgpa = cgpa;
    }

    // method to print the public variables/members
    void Show()
    {

        cout << "Name of the student: " << this->name << endl;
        cout << "Roll No of the Student: " << this->rollNo << endl;
    }

    // default destructor
    ~student()
    {
        cout << "Destructor called!" << endl;
    }
};

//Student Calls ends here!


// Main function starts::
int main()
{

    // Accessing Public variables and calling the class student
    student A("Gourav Ghosh", 1, 32, "7003817857", 7.8);

    // Accessing public variable to output name and roll
    A.Show();

    // Accessing Private variables/members
    A.Setage(32);
    A.SetCnumber("7003817857");
    A.Setcgpa(9.8);
    A.Getage();
    A.GetCnumber();
    A.Getcgpa();

    return 0;
}

// End of the code!