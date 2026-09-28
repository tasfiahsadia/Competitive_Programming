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
        vector<long long> a(n), pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pref[i + 1] = pref[i] + a[i];
        }

        string s;
        cin >> s;
        long long ans = 0;
        int l = 0, r = n - 1;

        while (l < r) {
            while (l < r && s[l] != 'L') 
                l++;
            while (l < r && s[r] != 'R') 
                r--;
            if (l < r) {
                ans += pref[r + 1] - pref[l];
                l++;
                r--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}