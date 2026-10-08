#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n + 1), pre(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pre[i] = pre[i - 1] + a[i];
        }
        string s;
        cin >> s;
        s = " " + s; 

        int l = 1, r = n;
        long long ans = 0;
        while (true) {
            while (l <= n && s[l] != 'L') 
                l++;
            while (r >= 1 && s[r] != 'R') 
                r--;
            if (l >= r) break;
            ans += pre[r] - pre[l - 1];
            l++;
            r--;
        }
        cout << ans << endl;
    }
    return 0;
}