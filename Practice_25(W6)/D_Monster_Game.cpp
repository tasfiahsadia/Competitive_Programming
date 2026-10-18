#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for(auto &x : a) 
            cin >> x;
        for(auto &x : b) 
            cin >> x;

        vector<long long> pre(n+1, 0);
        for(int i = 0; i < n; i++) 
            pre[i+1] = pre[i] + b[i];

        sort(a.begin(), a.end());

        long long ans = 0;
        for(int i = 0; i < n; i++){
            long long x = a[i];
            long long count = n-i; 

            int k = int(upper_bound(pre.begin(), pre.end(), count) - pre.begin()) - 1;

            ans = max(ans, x * (long long)k);
        }
        cout << ans << endl;
    }

    return 0;
}