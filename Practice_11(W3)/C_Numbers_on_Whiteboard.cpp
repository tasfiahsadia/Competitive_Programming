#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        cout << 2 << "\n";

        long long current = n;
        for (long long i = n - 1; i >= 1; i--) {
            cout << current << " " << i << "\n";
            current = (current + i + 1) / 2;
        }
    }
}