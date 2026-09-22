#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) 
            cin >> a[i];
        
        vector<int> log_table(n + 2);
        log_table[1] = 0;
        for (int i = 2; i <= n + 1; i++) 
            log_table[i] = log_table[i/2] + 1;

        int k = log_table[n] + 1;
        vector<vector<int>> sparse(k, vector<int>(n + 1));

        for (int i = 1; i <= n; i++) 
            sparse[0][i] = a[i];

        for (int i = 1; i < k; i++) {
            int len = 1 << i;
            int half = 1 << (i - 1);
            for (int j = 1; j + len-1 <= n; j++) 
                sparse[i][j] = max(sparse[i-1][j], sparse[i-1][j+half]);
        }

        int count = 0;
        while (m--) {
            int b, c;
            cin >> b >> c;

            if (c - b <= 1) {
                count++;
                continue;
            }

            int l = b + 1;
            int r = c - 1;
            int len = r - l + 1;
            int k = log_table[len];

            int maximum = max(sparse[k][l], sparse[k][r - (1 << k) + 1]);

            if (maximum <= a[b]) 
                count++;
        }
        cout << count << endl;
    }
}