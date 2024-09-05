#include<iostream>
#include <string.h>
using namespace std;

void replaceAtTheRate(char ch[], int n){
    for(int i = 0; i < n; i++){
        char currentChara = ch[i];
        if(currentChara == '@'){
            ch[i] = '*';
        }
    }
}

int main(){

    char ch[100];
    cin.getline(ch, 50);
    int len = strlen(ch);
    
    replaceAtTheRate(ch, 50);
    cout << ch;
    
    return 0;
}