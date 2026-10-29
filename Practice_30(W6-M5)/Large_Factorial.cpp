#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, ans=1;
        cin >> n;

        // (a*b) % MOD = ((a%MOD) * (b%MOD)) % MOD
        for(int i=1; i<=n; i++){
            ans = (1ll * ans * i) % MOD;
        }
        cout << ans << '\n';
    }
    
    return 0;
}