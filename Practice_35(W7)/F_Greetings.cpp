#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> bit;

void update(int i){
    for(; i<=n; i += i & -i) 
        bit[i]++;
}

int query(int i){
    int s = 0;
    for(; i>0; i -= i & -i) 
        s += bit[i];
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        cin >> n;
        vector<pair<int, int>> p(n);
        for(auto &x : p) 
            cin >> x.first >> x.second;

        sort(p.begin(), p.end());

        vector<int> b(n);
        for(int i=0; i<n; i++) 
            b[i] = p[i].second;
        vector<int> s = b;
        sort(s.begin(), s.end());
        for(auto &x : b)
            x = lower_bound(s.begin(), s.end(), x) - s.begin() + 1;

        bit.assign(n+1, 0);
        long long ans = 0;
        for(int i=0; i<n; i++){
            ans += i - query(b[i]);
            update(b[i]);
        }
        cout << ans << '\n';
    }
    
    return 0;
}