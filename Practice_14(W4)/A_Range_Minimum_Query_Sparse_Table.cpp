#include <bits/stdc++.h>
using namespace std;

int sp[20][1000005];   
int lg[1000005];

int main() {
    ios::sync_with_stdio(false);  
    cin.tie(NULL);

    lg[1] = 0;
    for (int i = 2; i <= 1000000; i++) 
        lg[i] = lg[i/2] + 1;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) 
            cin >> sp[0][i];

        for (int k = 1; (1 << k) <= n; k++) {
            for (int i = 0; i + (1 << k) <= n; i++) 
                sp[k][i] = min(sp[k-1][i], sp[k-1][i + (1 << (k-1))]);
        }

        int q;
        cin >> q;
        while (q--) {
            int l, r;
            cin >> l >> r;

            int len = r-l + 1;
            int k = lg[len];   

            cout << min(sp[k][l], sp[k][r - (1 << k) + 1]) << endl;
        }
    }
}