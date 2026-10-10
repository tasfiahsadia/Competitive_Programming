#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> count(n+2, 0);

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            count[x]++;
        }

        for(int i = 0; i <= n+1; i++){
            if(count[i] < 2*k){
                if(count[i] == 2*k - 1) 
                    cout << "YES" << endl;
                else 
                    cout << "NO" << endl;
                break;
            }
        }
    }
    return 0;
}