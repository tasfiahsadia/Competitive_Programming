#include<bits/stdc++.h>
using namespace std;

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

    int t;
    cin >> t;
    while(t--){
        cin >> n;
        bit.assign(n+1, 0);

        long long ans = 0;
        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            ans += j - query(x-1);
            update(x);
        }
        cout << ans << '\n';
    }
    
    return 0;
}