#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    for (int i = 0; i < m; i++) 
        cin >> b[i];

    long long ans = 0; 
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) 
            i++;
        else if (a[i] > b[j]) 
            j++;
        else {
            int x = a[i];

            int start_i = i;
            while (i < n && a[i] == x) 
                i++;
            long long cnt_a = i - start_i;

            int start_j = j;
            while (j < m && b[j] == x) 
                j++;
            long long cnt_b = j - start_j;

            ans += cnt_a * cnt_b;
        }
    }
    cout << ans << endl;

    return 0;
}