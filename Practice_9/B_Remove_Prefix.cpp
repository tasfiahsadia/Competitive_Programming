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

        vector<int> last(n + 1, -1);

        int start = 0;

        for (int i = 0; i < n; i++) {
            int m = a[i];
            if (last[m] >= start) 
                start = last[m] + 1;
            last[m] = i;
        }

        cout << start << endl;
    }
}