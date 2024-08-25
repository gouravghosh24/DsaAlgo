#include<iostream>
using namespace std;

class shape{

    public:
    //Using Virtual keyword we can do a late binding and run time polymorphism
    //Virtaul Keyword will not let the compiler bind the medthod called with the base class method
            virtual void draw() //final if you use final you will not be able to override this method in other classes
            {
                cout << "Drawing Generic Shape!" << endl;
            }
};

class Circle : public shape{
     
     public:
     void draw()
     {
        cout << "Drawing Circle Shape!" << endl;
     }
};

class Triangle : public shape{
     
     public:
     void draw() override
     {
        cout << "Drawing Triangle Shape!" << endl;
     }
};

class Rectangle : public shape{
     
     public:
     void draw() override
     {
        cout << "Drawing Rectangle Shape!" << endl;
     }
};

//Function to draw the shapes
void ShapeDraw(shape *s){

    // S-> is pointing to the base class method but it will check the methods called in the runtime 
    // and as per the paramater passed in the method it will bind the method of the perticular class in runtime
    // Without doing an early binding 
    s->draw();    
}


int main(){

    //Static prints created in the stack
    Circle C;
    Rectangle R;
    //Static print of the class created in the heap
    Triangle *T = new Triangle();

    //Parent class pointer is storing child class object or known as UPCASTING
    shape *n = new Circle();

    // Child class pointer is storing base class object or DOWNCASTING
    shape *x = new shape();
    Circle *c =  (Circle *) x;

    // This method will call the Object of the base class
    c->draw();

    //Methods called
    ShapeDraw(&C);
    ShapeDraw(&R);
    ShapeDraw(T);
    ShapeDraw(n);
    return 0;
}