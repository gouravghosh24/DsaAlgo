/*
    User inputs a digits and we have to create a number out of the digits  
    Refer page 57 on copy
*/

#include<iostream>

int main(){

    int n;
    std::cout << "User please enter the number or digits that you wish to enter: " << std::endl;
    std::cin >> n;

    int number = 0;
    for(int i =0; i < n; i++){
        std:: cout << "Enter the Digits: " << std::endl;
        int digits;
        std::cin >> digits;
        number = (number*10) + digits;
    }
    std::cout << "Number is: " << number << " " << std::endl;

    return 0;
}