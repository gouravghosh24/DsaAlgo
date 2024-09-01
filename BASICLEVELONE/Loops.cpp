/*
Loops
        Refer to page 18-20 on copy

It is not mandatory to write an initialization, condition, or update statement in a loop because loops can be used in various ways, 
such as:
1. Infinite loops: A loop with no condition, used for tasks that need to run indefinitely
    syntax: 
    while (true) {
    // code

2. Loop with initialization and update outside: The initialization and update statements can be outside the loop.

int i = 0;
while (i < 10) {    
    // code
    i++;
}

3. Loop with condition only: A loop with only a condition, used when the initialization and update are not needed.


int i = 0;
while (i < 10) {
    // code
}


However, it's generally good practice to include all three components (initialization, condition, and update) 
in a loop to make the code clear and avoid potential errors.
}


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    for(int i = 1; i < 10; i++){
        cout << i << " " << endl;
        // if(i == 5){
        //     // Break keyword is used to exit the loop
        //     break;
        // }
        if(i == 6){
            //This will only skip the perticular iteration here we are skipping 6th iteration
            continue;
        }
    }
    int k = 2;
    while(k <= 5){
        k = k + 1;
        cout << k << " ";
    }

    // For loop to print characters
    for(char ch = 'A'; ch <= 'Z'; ch++){
        cout << ch << " ";
    }


    return 0;
}