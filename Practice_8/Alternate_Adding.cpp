#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n+1);
        for (int i = 1; i <= n; i++) 
            cin >> a[i];
        
        long long prev1 = 0, prev2 = 0;
        long long ans = 0;
        long long zero = 0;
        
        for (int i = 1; i <= n; i++) {
            long long val = (i % 2 == 1) ? a[i] : -a[i]; // T_i
            long long cur1 = max(val, zero);
            long long cur2 = max(-val, zero);
            
            ans = ans + max(zero, cur1 - prev1);
            ans = ans + max(zero, cur2 - prev2);
            
            prev1 = cur1;
            prev2 = cur2;
        }
        
        cout << ans << endl;
    }
}