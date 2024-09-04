#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){ 

    //Vector 1
    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    //Vector 2
    vector<int> sec;
    sec.push_back(3);
    sec.push_back(4);
    sec.push_back(5);
    sec.push_back(6);

    //another vector to store the result of union
    vector<int> unions;
    //another vector to store the result of intersection
    vector<int> intersectss;
    //another vector to store the result of set difference
    vector<int> diff;
    //another vector to store the result of set symmetric difference
    vector<int> symmetric_diff;

    // set union to find the union of the elements 

    set_union(first.begin(), first.end(), sec.begin(), sec.end(), inserter(unions, unions.begin()));

    cout << "Union of the values are: " << endl;
    
    //Iterator to iterate over the values
    for(int a : unions){

        // output will be 1 2 3 4 5 as 3 and 4 are repated but set doesn't store dupicate values
        cout << a << " ";
    }

    // set intersection to find the intrsected elements 

    set_intersection(first.begin(), first.end(), sec.begin(), sec.end(), inserter(intersectss, intersectss.begin()));

    cout << endl << "Intersection of the values are: " << endl;
    
    //Iterator to iterate over the values
    for(int b : intersectss){

        // output will be 1 2 3 4 5 as 3 and 4 are repated but set doesn't store dupicate values
        cout << b << " ";
    }

    // set different to find the difference elements 

    set_difference(first.begin(), first.end(), sec.begin(), sec.end(), inserter(diff, diff.begin()));

    cout << endl << " Difference of the values are: " << endl;
    
    //Iterator to iterate over the values
    for(int b : diff){

        // output will be 1 2 3 4 5 as 3 and 4 are repated but set doesn't store dupicate values
        cout << b << " ";
    }

    // set symmetric different to find the symetric difference elements 

    set_symmetric_difference(first.begin(), first.end(), sec.begin(), sec.end(), inserter(symmetric_diff, symmetric_diff.begin()));

    cout << endl << " Symmetric Difference of the values are: " << endl;
    
    //Iterator to iterate over the values
    for(int b : symmetric_diff){

        // output will be 1 2 3 4 5 as 3 and 4 are repated but set doesn't store dupicate values
        cout << b << " ";
    }


    return 0;
}