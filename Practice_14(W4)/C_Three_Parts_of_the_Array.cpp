#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> d(n);
    for (auto &x : d) 
        cin >> x;

    int l = 0, r = n - 1;
    long long left = 0, right = 0, ans = 0;

    while (l <= r) {
        if (left <= right) {
            left += d[l++];
        } 
        else {
            right += d[r--];
        }
        if (left == right) 
            ans = left;
    }
    cout << ans << endl;
    return 0;
}