// Header/pre-processor files called
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{

    // Protected Car attributes:
protected:
    string carName;
    string model;
    string color;
    int Fuelcapacity;
    int NoOfTyres;

    // Constructor Parameterised
public:
    Vehicle()
    {
        cout << "Vehical Constructed!" << endl;
    }

    // Parameterised Constructor of Vehicle
    Vehicle(string _carName, string _model, string _color, int _Fuelcapacity, int _NoOfTyres)
    {

        this->carName = _carName;
        this->model = _model;
        this->color = _color;
        this->Fuelcapacity = _Fuelcapacity;
        this->NoOfTyres = _NoOfTyres;
    }

    // Behaviour of a Vehicle
    void StartEngine()
    {
        cout << carName << " " << "Engine Started!" << endl;
    }
    void StopEngine()
    {
        cout << carName << " " << "Engine Stopped!" << endl;
    }

    // Destructor called
    ~Vehicle()
    {
        cout << "Vehical Destructed!" << endl;
    }
};
// Vehicle class ends here!

// Cars class constructed
class Cars : public Vehicle
{

    // Parameterised constructor
    public:
    Cars(string _carName, string _model, string _color, int _Fuelcapacity, int _NoOfTyres) : Vehicle(_carName, _model, _color, _Fuelcapacity, _NoOfTyres)
    {
        this->carName = _carName;
        this->model = _model;
        this->color = _color;
        this->Fuelcapacity = _Fuelcapacity;
        this->NoOfTyres = _NoOfTyres;

    }

    //Function to print the Type and model of the Cars
    void showsCars(){
        cout << "Name of the Car: " << carName << endl;
        cout << "Model of the Car: " << model << endl;
        cout << "Color of the Car: " << color << endl;
        cout << "Fuel Capacity of the Car: " << Fuelcapacity << endl;
        cout << "The Car has: " << NoOfTyres << " no of tyres, 1 is a spare!" << endl;
    }
};
// Cars class end here

//Trucks class Start:
class Trucks : public Vehicle{

    // Parameterised constructor
    public:
    Trucks(string _carName, string _model, string _color, int _Fuelcapacity, int _NoOfTyres) : Vehicle(_carName, _model, _color, _Fuelcapacity, _NoOfTyres)
    {
        this->carName = _carName;
        this->model = _model;
        this->color = _color;
        this->Fuelcapacity = _Fuelcapacity;
        this->NoOfTyres = _NoOfTyres;

    }

    //Function to print the Type and model of the Trucks
    void showsTrucks(){
        cout << "Name of the Truck: " << carName << endl;
        cout << "Model of the Truck: " << model << endl;
        cout << "Color of the Truck: " << color << endl;
        cout << "Fuel Capacity of the Truck: " << Fuelcapacity << endl;
        cout << "The Truck has: " << NoOfTyres << " no of tyres, 1 is a spare!" << endl;
    }

    

    //Behavior
    void isLoaded(){
        cout << "Truck is loaded!" << endl;
    }
    void Truckempty(){
        cout << "Truck is empty now" << endl;
    }

};
//Trucks Class ends here





// Main Function
int main()
{
    //Calling the classes
    Cars A("Bugetti", "V8-Veyron", "Blue", 40, 5);
    Trucks B("TATA", "1613-TC", "White", 95, 17);

    //Calling the methods inside the classes
    A.showsCars();
    A.StartEngine();
    A.StopEngine();
    cout << endl;
    B.showsTrucks();
    B.StartEngine();
    B.isLoaded();
    B.Truckempty();
    B.StopEngine();

    return 0;
}