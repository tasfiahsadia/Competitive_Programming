#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        int ans = -1;
        for(int i = 0; i <= n; i++){
            int r = 4 * i-s;
            if(r >= 0 && i+r <= n){
                ans = i+r;
                break;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}