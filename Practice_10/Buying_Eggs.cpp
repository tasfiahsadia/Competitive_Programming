#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, f;
    cin >> x >> y >> f;
    
    int cst1 = 12 * x;          
    int cst2 = 12 * y + f;     
    
    int ans = min(cst1, cst2);
    
    cout << ans << endl;
}