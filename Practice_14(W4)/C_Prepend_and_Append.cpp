#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int l = 0, r = n - 1;
        int remove_pairs = 0;
        
        while (l < r && s[l] != s[r]) {
            remove_pairs++;
            l++;
            r--;
        }
        
        int ans = n - 2 * remove_pairs;
        cout << ans << endl;
    }
    return 0;
}