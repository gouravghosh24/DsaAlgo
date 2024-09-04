//
// Created by goura on 15-06-2024.
// Number of currency notes required to fullfuill the given nth amount
#include<iostream>
using namespace std;

int main() {
        int n10, n20, n50, n100, n500;
        n10 = 0;
        n20 = 0;
        n50 = 0;
        n100 = 0;
        n500 = 0;

        int amount;
        cin >> amount;
        switch(amount >= 500) {
            case 1: n500 = amount / 500;
                    amount -= n500 * 500;
                    break;
        }
        switch (amount >= 100) {
            case 1: n100 = amount/100;
                    amount -= n100 * 100;
                    break;
        }
        switch(amount >= 50) {
            case 1: n50 = amount / 50;
                    amount -= n50 * 50;
                    break;
        }
    switch(amount >= 20) {
        case 1: n20 = amount / 20;
        amount -= n20 * 20;
        break;
    }
    switch(amount >= 10) {
        case 1: n10 = amount / 10;
        amount -= n10 * 10;
        break;
    }
        cout << "Notes of 500: " << n500 << endl;
        cout << "Notes of 100: " << n100 << endl;
        cout << "Notes of 50: " << n50 << endl;
        cout << "Notes of 20: " << n20 << endl;
         cout << "Notes of 10: " << n10 << endl;
    return 0;
}