#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n), c(n);
    for(auto &x : a) 
        cin >> x;
    for(int i=0; i<n; i++){
        long long b;
        cin >> b;
        c[i] = a[i]-b;
    }

    sort(c.begin(), c.end());
    long long ans = 0;
    int l = 0, r = n-1;
    while(l < r){
        if(c[l]+c[r] > 0){
            ans += r-l; 
            r--;
        } 
        else 
            l++;
    }

    cout << ans << '\n';
    
    return 0;
}