#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;
        vector<long long> a(n + 1), cur(n + 1);
        vector<int> v(n + 1, -1);
        for (int i = 1; i <= n; i++) 
            cin >> a[i];

        int time = 0;
        for (int i = 0; i < m; i++) {
            int b;
            long long c;
            cin >> b >> c;
            if (v[b] != time) {
                cur[b] = a[b];
                v[b] = time;
            }
            cur[b] += c;
            if (cur[b] > h) 
                time++;
        }

        for (int i = 1; i <= n; i++) {
            if (v[i] == time) 
                cout << cur[i] << " ";   
            else 
                cout << a[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}