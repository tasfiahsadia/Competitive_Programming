#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        
        int minimum = min({a1, a2, a3});
        int best = 0;

        for (int c = minimum; c >= 0; c--) {
            int remaining = (a1-c) + (a2-c) + (a3-c);
            int weak = n - c;
            if (remaining <= 2*weak) {
                best = c;
                break;
            }
        }        
        cout << n - best << endl;
    }
}