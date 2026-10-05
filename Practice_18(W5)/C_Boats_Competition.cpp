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
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int w;
            cin >> w;
            cnt[w]++;
        }

        int ans = 0;
        for (int s = 2; s <= 2*n; s++) {
            int teams = 0;
            for (int i = 1; i <= n; i++) {
                int j = s - i;
                if (j < 1 || j > n) continue; 
                if (i < j) 
                    teams += min(cnt[i], cnt[j]);
                else if (i == j) 
                    teams += cnt[i] / 2;

            }
            ans = max(ans, teams);
        }

        cout << ans << endl;
    }

    return 0;
}