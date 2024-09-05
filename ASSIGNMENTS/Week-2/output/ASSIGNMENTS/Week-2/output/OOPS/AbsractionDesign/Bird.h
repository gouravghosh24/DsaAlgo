//Implementation file by the vendor

#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

//This Bird class is now an interface or an absract class 
// This Bird class not be reinstantiated or new object cannot be created of this class in the main.cpp file
class Bird{

    public:
    virtual void eat() = 0;
    virtual void fly() = 0;
};

class Pigeon : public Bird{

    public:
    void eat(){
        cout << "Pigeon is eating slower than Eagle!" << endl;
    }
    void fly(){
        cout << "Pigeon is flying slower than sparrow!" << endl;
    }

};

class Eagle : public Bird{

    public:
    void eat(){
        cout << "Eagle is eating slower than Sparrow!" << endl;
    }
    void fly(){
        cout << "Eagle is flying faster than Sparrow!" << endl;
    }

};

class Sparrow : public Bird{

    public:
    void eat(){
        cout << "Sparrow is eating faster than Pigeon!" << endl;
    }
    void fly(){
        cout << "Sparrow is flying slower than Eagle!" << endl;
    }

};


#endif