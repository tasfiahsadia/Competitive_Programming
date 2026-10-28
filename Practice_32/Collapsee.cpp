#include<bits/stdc++.h>
using namespace std;

# define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(auto &x : a) 
            cin >> x;

        ll ans = a[n-1] - a[n-2];
        for(int i = 0; i < n-2; i++)
            ans += abs(a[i]);
        cout << ans << '\n';
    }

    return 0;
}