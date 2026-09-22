#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        
        vector<int> log_table(n + 1);
        log_table[1] = 0;
        for (int i = 2; i <= n; i++) 
            log_table[i] = log_table[i / 2] + 1;

        int K = log_table[n] + 1;

        vector<vector<int>> sparse(K, vector<int>(n));

        for (int i = 0; i < n; i++) 
            sparse[0][i] = a[i];

        for (int k = 1; k < K; k++) {
            int length = 1 << k;       
            int half = 1 << (k - 1);   
            for (int i = 0; i + length <= n; i++) 
                sparse[k][i] = min(sparse[k-1][i], sparse[k-1][i + half]);
        }

        int q;
        cin >> q;
        string result = "";

        while (q--) {
            int i, j;
            cin >> i >> j;

            int len = j - i + 1;
            int k = log_table[len];

            int minimum = min(sparse[k][i], sparse[k][j - (1 << k) + 1]);

            result += to_string(minimum);
            result += "\n";
        }
        cout << result;
    }
}