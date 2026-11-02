#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    long long mx = 0;
    for(auto &v : a){
        cin >> v;
        mx = max(mx, v);
    }

    long long g = 0;
    for(int i = 0; i < n; i++)
        g = __gcd(g, mx-a[i]);

    long long y = 0;
    for(int i = 0; i < n; i++) 
        y += (mx-a[i]) / g;

    cout << y << " " << g << '\n';
    return 0;
}