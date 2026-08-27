#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(auto &x : a) 
            cin >> x;

        sort(a.rbegin(), a.rend());

        vector<long long> prefix(n+1, 0);
        for(int i=0; i<n; i++)
            prefix[i+1] = prefix[i] + a[i];

        long long total = prefix[n];
        long long min_cost = LLONG_MAX;

        for(int i=0; i<=n; i++){
            long long cost;
            if(i == n)
                cost = n; 
            else {
                long long r = total-prefix[i];   
                long long m = a[i];           
                if(2*m <= r)
                    cost = i + (r+1)/2; 
                else
                    cost = i + (r-m) + 1; 
            }
            min_cost = min(min_cost, cost);
        }
        cout << min_cost << endl;
    }
}