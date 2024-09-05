//
// Created by goura on 23-07-2024.
//
#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int target = 70;
    int count = 0;
    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            for(int k = j + 2; k < n; k++) {
                int temp = arr[i] + arr[j] + arr[k];
                if(temp == target) {
                    cout << "{ " << " " << arr[i]<< " " << i << ", " << arr[j]<< " " << j << ", " << arr[k]<< " " << k << " }" << endl;
                    count++;
                }
            }
        }

        cout << count;
        return 0;
    }
}

