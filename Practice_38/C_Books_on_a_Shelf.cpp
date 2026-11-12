#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> h(n);
        for(int i=0; i<n; i++) 
            cin >> h[i];
        sort(h.begin(), h.end());

        vector<ll> l, m, r;
        int same = 0;   

        for(int i=0; i<n; i++){
            if(i==0 || h[i] != h[i-1]) 
                same = 0;
            same++;

            if(same == 1) 
                l.push_back(h[i]);
            else if(same == 2) 
                r.push_back(h[i]);
            else 
                m.push_back(h[i]);
        }

        reverse(r.begin(), r.end());
        cout << l.size() + r.size() << '\n';

        for (auto x : l) 
            cout << x << " ";
        for (auto x : m) 
            cout << x << " ";
        for (auto x : r) 
            cout << x << " ";
        cout << '\n';
    }
    
    return 0;
}