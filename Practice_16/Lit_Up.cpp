#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) 
            cin >> a[i];
        
        int best = INT_MAX;
        for(int i=1; i<=n; i++) {
            for(int j=i+1; j<=n; j++){
                bool flag = true;
                for (int s = 1; s <= n; s++) {
                    bool left = (abs(s - i) <= k);
                    bool right = (abs(s - j) <= k);
                    
                    if(!left && !right) {
                        flag = false;
                        break ;
                    }
                }
                
                if(flag) 
                    best = min(best, a[i] + a[j]);
            }
        }
        if(best == INT_MAX) 
            cout << -1 << endl;
        else
            cout << best << endl;
    }
}