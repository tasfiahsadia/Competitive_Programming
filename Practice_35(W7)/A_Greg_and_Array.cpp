#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n+2), diff(n+3, 0);
    for(int i=1; i<=n; i++) 
        cin >> a[i];

    vector<int> l(m+1), r(m+1);
    vector<long long> d(m+1);
    for(int i=1; i<=m; i++) 
        cin >> l[i] >> r[i] >> d[i];

    vector<long long> count(m+2, 0);
    for(int i=0; i<k; i++){
        int x, y;
        cin >> x >> y;
        count[x]++;
        count[y+1]--;
    }

    for(int i=1; i<=m; i++) 
        count[i] += count[i-1];
    
    for(int i=1; i<=m; i++){
        long long val = count[i]*d[i];
        diff[l[i]] += val;
        diff[r[i]+1] -= val;
    }

    long long cur = 0;
    for(int i=1; i<=n; i++){
        cur += diff[i];
        cout << a[i] + cur << " ";
    }
    cout << '\n';

    return 0;
}