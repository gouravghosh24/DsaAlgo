#include<iostream>
#include <string>
using namespace std;

class student{

    public:
    //Define the attributes:
    int id;
    int age;
    string fname;
    string lname;
    int nos;

    //Define a constructor
    student(){
        cout << this -> fname << "Default Constructor caller!" << endl;
    }

    //Defining the behaviour
    void sleep(){ 

        // This keyword is used to point to the current attribute
        cout << this->fname << " Is sleeping!" << endl; 
        } 
    void study(){ 
        cout << this->fname << " Is Studying!" << endl; 
        } 
    void bunk(){ 
        cout << this->fname << " Is Bunking!" << endl; 
        } 

        //Define a Destructor
    ~student(){
        cout << this -> fname  << "Default Destructor caller!" << endl;
    }
};

int main(){

    //Creating students
    student Gourav;
    student Rakesh;

    //Adding information on student
    Gourav.age = 32;
    Gourav.id = 1;
    Gourav.fname = "Gourav ";
    Gourav.lname = "Ghosh ";
    Gourav.nos = 6;

    Rakesh.age = 22;
    Rakesh.id = 2;
    Rakesh.fname = "Rakesh ";
    Rakesh.lname = "Modi ";
    Rakesh.nos = 5;

    Gourav.study();
    Rakesh.bunk();


    return 0;
}