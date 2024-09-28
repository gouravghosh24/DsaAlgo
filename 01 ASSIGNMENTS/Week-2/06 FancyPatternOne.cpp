/*
Pattern Type: Fancy Pattern
input: 5
Output:

********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
***6*6*6*6*6*6***
**7*7*7*7*7*7*7**
*8*8*8*8*8*8*8*8*


*/
// Optimised soloution 
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    for(int i = 0; i <n; i++){
        int start_num_index = 8 - i;
        int num_print = i + 1;
        int count_toPrint = num_print;
        for(int j =0; j < 17; j++){
            if(j == start_num_index && count_toPrint > 0){
                cout << num_print;
                start_num_index += 2;
                count_toPrint--;
            }
            else{
                cout << "*";
            }
            
        }
        cout << endl;
    }
}