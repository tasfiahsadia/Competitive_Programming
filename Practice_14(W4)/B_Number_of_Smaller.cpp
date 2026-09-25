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

    vector<int> result(m);

    int i = 0; 
    for (int j = 0; j < m; j++) {
        while (i < n && a[i] < b[j]) 
            i++;
        result[j] = i; 
    }

    for (int k = 0; k < m; k++) {
        cout << result[k];
        if (k != m - 1) cout << " ";
    }
    cout << endl;

    return 0;
}