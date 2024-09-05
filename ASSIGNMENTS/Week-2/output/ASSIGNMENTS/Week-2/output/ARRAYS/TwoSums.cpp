//
// Created by goura on 22-07-2024.
//
#include<iostream>
#include <algorithm>
using namespace std;

pair<int, int> FindThePair(int arr[], int size, int target) {
    pair <int, int> ans = make_pair(-1, -1);
    for(int i = 0; i < size; i++) {
        int temp = 0;
        for(int j =0; j < size; j++) {
            temp = arr[i] + arr[j];
            if(temp == target) {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
                //cout << "{" << arr[i] << " " << arr[j] << "}" << " ";
            }

        }
    }
}

int main() {
    int arr[] = {5,30,20,15,10};
    int n = 5;
    int target = 35;
    pair <int, int> ans = FindThePair(arr, n, target);

    if(ans.first == -1 && ans.second == -1) {
            cout << "Pair not found " << endl;
    }
    else{
        cout << "Pair found! " << "{" << ans.first << ", " << ans.second << "}"<<  endl;
    }
}