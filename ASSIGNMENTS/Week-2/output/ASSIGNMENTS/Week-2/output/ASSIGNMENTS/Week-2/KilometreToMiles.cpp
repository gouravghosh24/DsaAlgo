#include <iostream>
using namespace std;

float KiloToMiles(int km){

    float miles_per_Kilo = km * 0.621371;
    return miles_per_Kilo;
}


int main() {
    
float km; 
cin >>km;

float miles = KiloToMiles(km);
cout << km <<" Kilometres to " << "Miles: " << miles << endl;

return 0;
}
