#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    for(int i = 0; i < n; i++) 
        cin >> b[i];

    long long ans = 0;
    for(int x = 0; x >= -1; x--) {
        multiset<int> c, d;
        int l = 0;
        long long cnt = 0;

        for(int r = 0; r < n; r++) {
            c.insert(a[r]);
            d.insert(b[r]);

            while(l<=r && (long long)*c.rbegin() - *d.begin() > x) {
                c.erase(c.find(a[l]));
                d.erase(d.find(b[l]));
                l++;
            }
            cnt += r - l + 1;
        }

        if (x == 0) 
            ans += cnt;
        else 
            ans -= cnt;
    }

    cout << ans << endl;
}