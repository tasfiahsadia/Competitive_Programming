#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        int left = 0;
        long long sum = 0;
        int best = -1;

        for (int right = 0; right < n; right++) {
            sum += a[right];

            while (sum > s && left <= right) {
                sum -= a[left];
                left++;
            }

            if (sum == s) 
                best = max(best, right - left + 1);
        }

        if (best == -1) 
            cout << -1 << endl;
        else 
            cout << n - best << endl;
    }

    return 0;
}