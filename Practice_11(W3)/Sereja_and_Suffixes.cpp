#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    
    vector<int> ans(n+2, 0);
    unordered_set<int> s;

    int count = 0;

    for (int i = n; i >= 1; i--) {
        if (s.find(a[i]) == s.end()) {
            s.insert(a[i]);
            count++;
        }
        ans[i] = count;
    }

    while (m--) {
        int l;
        cin >> l;
        cout << ans[l] << endl;
    }
}