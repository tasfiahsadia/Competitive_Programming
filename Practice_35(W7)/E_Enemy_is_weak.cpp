#include<bits/stdc++.h>
using namespace std;

#define ll long long

int n;
vector<int> bit;

void update(int i){
    for(; i <= n; i += i & -i) 
        bit[i]++;
}

int query(int i){
    int s = 0;
    for(; i > 0; i -= i & -i) 
        s += bit[i];
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    vector<int> a(n), b;
    for (auto& x : a) 
        cin >> x;

    b = a;
    sort(b.begin(), b.end());
    for(auto &x : a)
        x = lower_bound(b.begin(), b.end(), x) - b.begin() + 1;

    vector<ll> l(n);
    bit.assign(n+1, 0);
    for(int i=0; i<n; i++){
        l[i] = i - query(a[i]);
        update(a[i]);
    }

    bit.assign(n+1, 0);
    ll ans = 0;
    for(int i = n-1; i >= 0; i--){
        ll r = query(a[i]-1);
        ans += l[i] * r;
        update(a[i]);
    }
    cout << ans << '\n';
    
    return 0;
}