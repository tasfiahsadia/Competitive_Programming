#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        unordered_map<int, int> first, last;
        first.reserve(n * 2);
        last.reserve(n * 2);

        for (int i = 0; i < n; i++) {
            if (first.find(a[i]) == first.end()) {
                first[a[i]] = i;
            }
            last[a[i]] = i; 
        }

        string result;
        result.reserve(k * 4);

        for (int i = 0; i < k; i++) {
            long long b, c;
            cin >> b >> c;

            auto it1 = first.find(b);
            auto it2 = last.find(c);

            if (it1 != first.end() && it2 != last.end() && it1->second < it2->second) 
                result += "YES\n";
            else 
                result += "NO\n";
        }
        cout << result;
    }
}