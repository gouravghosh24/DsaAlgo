//Interface file 

#include<iostream>
#include "Bird.h" //calling the bird object from the bird.h file

using namespace std;

//Function is accessing the properties of the Bird object
void BirdDoesSomething(Bird *&bird){

    bird->eat();
    bird->fly();

}

int main(){

    Bird *P = new Pigeon();
    Bird *E = new Eagle();
    Bird *S = new Sparrow();

    BirdDoesSomething(S);
    BirdDoesSomething(E);
    BirdDoesSomething(P);

}