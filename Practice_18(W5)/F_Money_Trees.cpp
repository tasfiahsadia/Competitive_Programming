#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n), h(n);
        for (auto &x : a) 
            cin >> x;
        for (auto &x : h) 
            cin >> x;

        int ans = 0;
        int l = 0;
        long long sum = 0;

        for (int r = 0; r < n; r++) {
            if (r > 0 && h[r-1] % h[r] != 0) {
                l = r;
                sum = 0;
            }
            sum += a[r];

            while (l <= r && sum > k) {
                sum -= a[l];
                l++;
            }
            ans = max(ans, r - l + 1);
        }

        cout << ans << endl;
    }
    return 0;
}