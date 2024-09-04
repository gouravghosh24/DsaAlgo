#include<iostream>
#include <string.h>

using namespace std;

bool checkPali(char ch[], int n){

for(int i = 0; i < n; i++){
    for(int j = n -1; j > 0; j--){
        if(ch[i] == ch[j]){
            return true;
        }
        return false;
    }
}


}

int main(){

    char ch[100];
    cin.getline(ch, 100);
    int n = strlen(ch);
    
    bool checks = checkPali(ch, n);
    if(checks == 1){
        cout << "This is a palindrome!";
    }
    else{
        cout << "This is not a palindrome!";
    }

    return 0;
}