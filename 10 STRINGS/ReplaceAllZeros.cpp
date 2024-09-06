#include<iostream>
#include<string>

using namespace std;

int main(){

    int n = 2000;
    

    //typecasting integer to string

    string str = to_string(n);

    //accessing the elements using for loop
    for(char &c: str){

        //Check if any number is 0 change it to 5 and print
        if(c == '0'){
            c = '5';
        }
        
    }

    cout << str;
    
    return 0;
}