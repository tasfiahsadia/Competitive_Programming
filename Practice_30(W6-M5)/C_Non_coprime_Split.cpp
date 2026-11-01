#include<bits/stdc++.h>
using namespace std;

# define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;

        if(l < r){
            if(r < 4){
                cout << -1 << '\n';
                continue;
            }
            ll n = (r%2 == 0) ? r : r-1;
            cout << n/2 << " " << n/2 << '\n';
        } 

        else{
            ll n = l;
            ll d = -1;
            for(ll i = 2; i*i <= n; i++){
                if(n%i == 0){
                    d = i;
                    break;
                }
            }

            if(d == -1)
                cout << -1 << '\n';
            else 
                cout << d << " " << n-d << '\n';
        }
    }

    return 0;
}