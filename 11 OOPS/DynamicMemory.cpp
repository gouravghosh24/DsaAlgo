#include <iostream>
#include <string>
using namespace std;

class student
{

public:
    //Attributes of the class
    string name;
    int age;
    int id;
    int NoOfSub;
    float *gpa;

    // creating a parameterised constructor
    student(string name, int age, int id, int NoOfSub, float gpa)
    {

        // This is point to the current object and fill the values in the attributes
        this->name = name;
        this->age = age;
        this->id = id;
        this->NoOfSub = NoOfSub;
        //dynamically creating a attribute in the dynamic memory
        this ->gpa = new float(gpa);
    }

    //Behavior of the call
    void studying(){
        cout << this -> name << " is Studying! " << endl;
    }
    ~student(){
        cout << "Desctructor called!";
        //To avoid memory leak we will delete the dynamically created attribute
        delete this->gpa;
    }

};

int main(){

    //Dynamic allocation or student pointer => stored in heap memory
    student *A = new student("Gourav Ghosh", 32, 1, 6, 9.5);

    //Printing the values 
    cout << A -> name << " " << A -> id << endl;
    
    //calling the behavior
    A -> studying();

    //We have to call the destructor manually to clear the space
    delete A;
}