#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        unordered_map<int,int> freq; 
        
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            
            int a;
            if (x%2 == 1) 
                a = -1;             
            else {
                long long m = x/2;
                a = m%2;       
            }
            freq[a]++;
        }
        
        int ans = 0;
        for (auto &p : freq) {
            ans = max(ans, p.second);
        }
        
        cout << ans << endl;
    }
}