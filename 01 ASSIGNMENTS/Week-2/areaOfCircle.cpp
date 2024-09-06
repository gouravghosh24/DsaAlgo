/*
Print the Area of a Circle
Refer page 47 on the copy

*/

#include <iostream>
using namespace std;


float areaOfACircle(float radius){

float area_circle = 3.14* radius * radius;
return area_circle;

}

int main(){

    float radius;
    cout << "Enter the radius: "<< endl; 
    cin >> radius;

    float area = areaOfACircle(radius);
    cout <<"Area of the circle is: " << area;

    return 0;
}