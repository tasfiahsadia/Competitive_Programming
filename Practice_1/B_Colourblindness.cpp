#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        
        int same = 1;
        for (int i = 0; i < n; i++) {
            char x = a[i];
            char y = b[i];
            
            if (x == 'B') 
                x = 'G';
            if (y == 'B') 
                y = 'G';
            
            if (x != y) {
                same = 0;
                break;
            }
        } 
        cout << (same ? "YES" : "NO") << endl;
    }
}