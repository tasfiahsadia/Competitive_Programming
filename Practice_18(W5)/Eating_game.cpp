#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int total = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }

        vector<bool> winner(n, false);

        for (int s = 0; s < n; s++) {      // প্রতিটি শুরুর খেলোয়াড়
            vector<int> b = a;             // অ্যারের কপি
            int remaining = total;
            int pos = s, last = s;

            while (remaining > 0) {
                if (b[pos] > 0) {          // খাবার থাকলে একটি খায়
                    b[pos]--;
                    remaining--;
                    last = pos;
                }
                pos = (pos+1) % n;       // পরের খেলোয়াড়
            }
            winner[last] = true;           // শেষ খাবার যে খেয়েছে
        }

        int ans = 0;
        for (int i = 0; i < n; i++){
            if (winner[i]) 
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}