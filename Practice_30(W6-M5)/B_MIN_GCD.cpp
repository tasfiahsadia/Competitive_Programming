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

        int index = min_element(a.begin(),a.end()) - a.begin();
        ll m = a[index];

        ll g = 0;
        for(int i = 0; i < n; i++){
            if (i == index) 
                continue;
            if(a[i]%m == 0) 
                g = __gcd(g, a[i]);
        }
        cout << (g == m ? "Yes" : "No") << '\n';
    }
    
    return 0;
}