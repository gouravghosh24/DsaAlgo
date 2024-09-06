/*
    Number system:
    Decimal Number system:
    1. Decimal numebers have base 10
    2. It uses 0-9 as it's base is 10
    3. Base if the digits/numbers/symbols that the numbersystem uses
    
    Binary Number system:
    1. This number system uses base 2
    2. It only uses 2 digits i.e, 0 -1 
*/


#include<iostream>
#include<cmath>
using namespace std;

//Method 1
int decimalToBinary(int n){
    int binaryNo = 0;
    int i = 0;
    //Division Method
    while(n > 0){

        //To extrac the bits of the nth number we divide it by 2 but we need the bit remainders so we use %
        int bits = n % 2;
        // first iteration bits = 1 * power of 10 to the power 0 = 1 + binaryNo = 0
        // 1*(1)+0 = 0
        //Second iteration bits = 0 * power of 10 to the power 1 = 10 + binaryNo = 1
        // 0*(10)+1 = 1
        //third iteration bits = 10 * power of 10 to the power 2 = 100 + binaryNo = 10
        // 0*(100)+10 = 10
        //Fourth iteration bits = 10 * power of 10 to the power 3 = 1000 + binaryNo = 10
        // 1*(1000)+10 = 1010
        binaryNo =  bits*pow(10, i++)+ binaryNo;

        n = n/2;
    }
    return binaryNo;
}
// decimalToBinary() ENDS!

int decimalToBin(int a){
    int binNo = 0;
    int i = 0;

    while(a>0){

        int b = a & 1;
        binNo =  b*pow(10, i++)+ binNo;
        a = a >> 1;
    }
    return binNo;
}
// decimalToBin() ENDS!

int BinaryToDecimal(int d){
    int decimal = 0;
    int i = 0;
    while(d){

        int bit = d%10;
        decimal = decimal + bit * pow(2, i++);
        d /= 10;
    }
    return decimal;
}

int main() {
    int n;
    cin >> n;
    int a;
    cin >> a;
    int d;
    cin >> d;
    int ans = decimalToBinary(n);
    cout << ans << endl;

    int ans2 = decimalToBin(a);
    cout << ans2 << endl;

    int ans3 = BinaryToDecimal(d);
    cout << ans3 << endl;
    return 0;
}