#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq; // for max priority queue
    // priority_queue<int, vector<int>, greater<int>> pq; // for min priority queue
    pq.push(10);
    pq.push(5);
    pq.push(2);
    cout << pq.top() << endl;
    pq.push(100);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    cout << pq.empty() << endl;
}