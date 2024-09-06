#include<iostream>
#include <string.h>
using namespace std;

void ConvertUpperToLowerCase(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0'){
        char CurrentChar = ch[index];
        if(ch[index] >= 'a' && ch[index] < 'z'){
            ch[index] = ch[index] - 'a' + 'A';
            
        }
        index++;  
    }
   
}
int main(){

    char ch[100];
    cin.getline(ch, 50);
    int len = strlen(ch);
    
    ConvertUpperToLowerCase(ch, 50);
    cout << ch;
    
   
    return 0;
}