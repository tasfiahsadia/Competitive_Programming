#include<bits/stdc++.h>
using namespace std;

const int MAX = 200005;
int diff[MAX + 2], cont[MAX], pre[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;

    for(int i=0; i<n; i++){
        int l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r+1]--;
    }

    for(int i=1; i<MAX; i++){
        cont[i] = cont[i-1] + diff[i];
        pre[i] = pre[i-1];
        if(cont[i] >= k) 
            pre[i]++;
    }

    while(q--){
        int a, b;
        cin >> a >> b;
        cout << pre[b] - pre[a-1] << '\n';
    }

    return 0;
}