#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum = 0;
    int left = 0;
    int ans = n + 1;

    for (int right = 0; right < n; right++) {
        sum += a[right];

        while (sum >= s) {
            ans = min(ans, right - left + 1);
            sum -= a[left];
            left++;
        }
    }

    if (ans == n + 1)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}