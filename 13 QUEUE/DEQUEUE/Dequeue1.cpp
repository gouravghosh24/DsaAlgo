#include<iostream>
#include<deque>

using namespace std;

int main(){

    //Creating a Deque named DQ
    deque<int> DQ;

    //Pushing Elements in the Deque in the front/top
    DQ.push_front(100);
    DQ.push_front(200);
    DQ.push_front(300);
    //Pushing Elements in the Deque in the back/bottom
    DQ.push_back(400);
    DQ.push_back(500);
    DQ.push_back(600);

    //Initialising an iterator to iterate over the elements of the Deque
    deque<int>::iterator dq = DQ.begin();
    while(dq != DQ.end()){
        cout << "Elements in the Deque are: " << *dq << endl;
        dq++;
    }




}