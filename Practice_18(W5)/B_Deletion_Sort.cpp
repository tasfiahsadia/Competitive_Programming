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
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        bool sorted_arr = true;
        for (int i = 0; i + 1 < n; i++) {
            if (a[i] > a[i+1]) {     
                sorted_arr = false;
                break;
            }
        }

        if (sorted_arr) 
            cout << n << endl;
        else 
            cout << 1 << endl;
    }
    return 0;
}