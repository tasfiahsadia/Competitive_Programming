#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) 
            freq[a[i]]++;

        long long max_freq = 0;
        for (auto &p : freq) 
            max_freq = max(max_freq, (long long)p.second);
        
        long long rest = n - max_freq;
        long long ans;
        if (max_freq > rest) 
            ans = max_freq - rest;
        else 
            ans = n % 2;

        cout << ans << endl;
    }
}