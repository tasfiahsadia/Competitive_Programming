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
        vector<int> p(n), a(n);
        for(auto &x : p) 
            cin >> x;
        for(auto &y : a) 
            cin >> y;

        vector<int> b;
        for(int i = 0; i < n; i++){
            if(i==0 || a[i] != a[i-1]) 
                b.push_back(a[i]);
        }

        vector<bool> seen(n+1, false);
        bool ok = true;
        for(int x : b){
            if(seen[x]){
                ok = false; 
                break; 
            }
            seen[x] = true;
        }

        if(ok){
            int j = 0;
            for(int i=0; i<n && j<b.size(); i++){
                if (p[i] == b[j]) 
                    j++;
            }
            if(j != b.size()) 
                ok = false;
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}