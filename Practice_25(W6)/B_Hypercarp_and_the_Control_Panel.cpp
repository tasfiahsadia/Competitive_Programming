#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> col, sz;
        for(int i = 0; i < n; i++){
            if(i > 0 && a[i] == a[i-1]){
                sz.back()++;
            } 
            else{
                col.push_back(a[i]);
                sz.push_back(1);
            }
        }

        int k = col.size();
        int ans = k;

        bool two = false;
        for(int i = 0; i + 1 < k; i++){
            if(sz[i] >= 2 && sz[i + 1] >= 2) {
                two = true;
                break;
            }
        }

        if(two){
            ans = k+2;
        } 
        else{
            for(int i = 0; i < k; i++){
                if(sz[i] < 2) 
                    continue;
                bool ok = false;
                if(i+1 < k && (i+2 >= k || col[i+2] != col[i])) 
                    ok = true;
                if(i-1 >= 0 && (i-2 < 0 || col[i-2] != col[i])) 
                    ok = true;
                if(ok){
                    ans = k+1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}