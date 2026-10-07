#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string s, l;
        cin >> n >> m >> s >> l;

        bool left[26] = {false};
        for (char c : l) 
            left[c - 'a'] = true;

        int best = 1, cur = 1;
        for (int i=1; i<n; i++) {
            if (left[s[i] - 'a'] == left[s[i-1] - 'a'])
                cur++;
            else
                cur = 1;
            best = max(best, cur);
        }
        cout << best << endl;
    }
    return 0;
}