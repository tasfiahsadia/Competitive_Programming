#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;
        freq.reserve(n * 2);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        
        int max_freq = 0;
        for (auto &p : freq) 
            max_freq = max(max_freq, p.second);

        int ans = (max_freq+1) / 2;
        
        cout << ans << endl;
    }
}