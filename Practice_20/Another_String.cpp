#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;

        int c = count(a.begin(), a.end(), '1');
        int d = count(b.begin(), b.end(), '1');

        if (c%2 == d%2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}