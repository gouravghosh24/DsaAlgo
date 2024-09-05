// Header/pre-processor files called
#include <iostream>
#include <string>
using namespace std;

// Base class Vehical called
class vehicle
{
    // Public members set up
public:
    string name;
    string model;
    int noOfTyres;

    // setting a private member
private:
    bool Damages;
    // Setting Car paint as protected
protected:
    string carPaint;

    // setting a setter for the member
public: // Public
    bool SetDamage()
    { // Setter
        return this->Damages;
    }
    bool GetDamages()
    { // Getter
        return this->Damages;
    }

    // Parameterised constructor
    vehicle(string _name, string _model, int _noOfTyres, bool _Damages, string _carPaint)
    {
        cout << "We are inside the Vehicle Constructor now! " << endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
        this->Damages = _Damages;
        this->carPaint = _carPaint;
    }

    // Calling public methods
public:
    void engineStart()
    {
        cout << name << " " << model << " Starting Engine! " << endl;
    }

    void engineStop()
    {
        cout << name << " " << model << " Stopping Engine! " << endl;
    }
};

// Build a child class
class Car : public vehicle
{
    // creating the specs of a car using public members
public:
    int noOfDoors;
    string transmissionType;

    // Parameterised constructor for Car and also using the members of Vehical
    Car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType, bool _Damages, string _carPaint) : vehicle(_name, _model, _noOfTyres, _Damages, _carPaint)
    {
        cout << "We are inside the Car  now! " << endl;
        // creating members
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType;
    }

    // Output Medthod
    void FuncCar()
    {
        cout << "Car Name: " << name << endl;
        cout << "Car Model: " << model << endl;
        cout << "No of Typres car has: " << noOfTyres << endl;
        cout << "No of Doors the car has: " << noOfDoors << endl;
        cout << "Transmission type: " << transmissionType << endl;
        cout << "car colour: " << carPaint << endl;
    }

    // creating a public method of the car
    void StartAc()
    {
        // inheriting the name and model members from the base/parent class
        cout << "Air condition Switched on " << name << " " << model << endl;
    }
};

// Main function call
int main()
{
    // calling the vehical class
    // vehicle Mazda("Mazda", "V8-Nitro", 4);
    // cout << Mazda.name << " " << Mazda.model << endl;
    // Mazda.engineStart();

    // Calling the Child class Car

    Car A("Mazda", "V8-Nitro", 4, 5, "Sedan", 1, "NeptuneBlue");
    Car B("Mercedes", "V9-Turbo", 4, 5, "XUV", 0, "CreamyWhite");

    // Calling the public methods/fuctions of the car
    B.FuncCar();
    cout << endl;
    B.StartAc();
    cout << endl;
    B.engineStop();
    cout << endl;

    // accessing Damages private method in vehical base class

    if (B.GetDamages() == 1)
    {
        cout << "Car is already damaged!" << endl;
    }
    else
    {
        cout << "Car is in a maintained condition!" << endl;
    }

    // Return statement
    return 0;
}