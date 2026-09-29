#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    map<long long, int> pos; 

    for (int i = 1; i <= n; i++) {
        long long a;
        cin >> a;

        auto it = pos.find(x - a);
        if (it != pos.end()) {
            cout << it->second << " " << i << endl;
            return 0;
        }
        pos[a] = i;
    }

    cout << "IMPOSSIBLE";
    return 0;
}