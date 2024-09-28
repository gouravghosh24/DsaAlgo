/*
    Geeks for Geeks Problem!
    Refer to page number 87 on the copy
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int KeyPairs(vector<int> arrs, int target){

    sort(arrs.begin(), arrs.end());
    int n = arrs.size();
    int low = 0;
    int high = n - 1;
    while(low < high){
        
        int temporarySum = arrs[low] + arrs[high];
        if(target == temporarySum){
            return true;
        }
        else if(temporarySum > target){
            high--;
            
        }
        else low++;
        
    }
    
    return false;
}

int main(){

    vector<int> arrs = {1, 4, 45, 6, 10, 8};
    
    int target;
    cout << "Enter the Target Value: " << endl;
    cin >> target;

    bool checker = KeyPairs(arrs,target);
    if(checker == 1){
        cout << "Found!";
    }
    else cout <<"Not Found!";

    return 0;
}