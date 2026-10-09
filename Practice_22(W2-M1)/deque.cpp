#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n); //double ended queue, extra memory use hoy pointer er jnn (~double)
    for(int i = 0; i < n; i++){
        // int x;
        // cin >> x;
        // dq.push_back(x);
        cin >> dq[i];
    }

    for(auto value : dq)
        cout << value << " ";
    cout << endl;

    dq.push_front(10);
    dq.push_front(2);
    dq.pop_front();
    dq.pop_back();

    for(auto value : dq)
        cout << value << " ";
    cout << endl;

    cout << dq.front() << " " << dq.back() << endl;

    // push_back(), pop_back(), back();
    // push_front(), pop_front(), front();

    return 0;
}