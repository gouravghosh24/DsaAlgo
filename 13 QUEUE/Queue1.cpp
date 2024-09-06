#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<int> Q;

    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);

    // Checking the Queue size
    cout << "Queue size is: " << Q.size() << endl;
    
    // delete elements from Queue
    Q.pop();

    // Checking the Queue size after popping/deleting
    cout << "Queue size after popping is: " << Q.size() << endl;
    
    //Checking if Queue is empty or not
    if(Q.empty()== 1){
        cout << "Empty!" << endl;
    }
    else{
        cout << "Not empty!" << endl;
        //checking first/front element in the queue and printing it
        cout << "Front element is Queue is: " << Q.front() << endl;
        //checking Last/end/back element in the queue and printing it
        cout << "Last element is Queue is: " << Q.back() << endl;
    }

}