#include <iostream>
#include <queue>

using namespace std;

int main()
{

    //creating a priority queue with max heap to return the maximum value preset in the queue
    priority_queue<int> PQ;

    // Pushing elements
    PQ.push(5);
    PQ.push(20);
    PQ.push(30);

    // The below code will display the largest value in the queue as it is considere to be the top priority value
    cout << "Top element in the Priority Queue as per max heap: "  << PQ.top() << " " << endl;

    if(PQ.empty()!= 1){
        PQ.pop();
        cout << "After poping an element: " << PQ.top() << endl;
    }
    else{
        cout << "Queue is empty! " << endl;
    }

    //creating a priority queue with min heap to return the minimum value preset in the queue
    priority_queue<int, vector<int>, greater<int>> n;
    n.push(100);
    n.push(10);
    n.push(1000);

    cout << "Top element in the Priority Queue as per min heap: " << n.top() << endl;
    if(n.empty()!= 1){
        n.pop();
        cout << "After poping an element: " << n.top() << endl;
    }
    else{
        cout << "Queue is empty! " << endl;
    }
}