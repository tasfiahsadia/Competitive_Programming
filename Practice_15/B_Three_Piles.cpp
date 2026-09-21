#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        long long d1 = a - b;
        long long d2 = a - b + c;
        
        long long ans = max(abs(d1), abs(d2));
        
        cout << ans << endl;
    }
}