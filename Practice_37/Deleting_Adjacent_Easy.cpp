#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        priority_queue<int> pq;          
        int total = 0, sum = 0;

        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            total += x;
            pq.push(x);

            if(i%2 == 1){          
                sum += pq.top();
                pq.pop();
            }
        }
        cout << 2*sum - total << '\n';
    }
    return 0;
}