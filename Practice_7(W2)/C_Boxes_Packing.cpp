#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }
    
    int ans = 0;
    for (auto &p : freq) {
        ans = max(ans, p.second);
    }
    
    cout << ans << endl;
}