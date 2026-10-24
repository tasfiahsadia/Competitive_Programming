#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> count(n+1, 0);
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            count[x]++;
        }

        int ans = 0, pre = 0;
        for(int i = 0; i < n; i++){
            pre += count[i];
            if(count[i] >= 1 && pre >= (i+1)*k)
                ans = i+1;
            else 
                break;
        }
        cout << ans << endl;
    }

    return 0;
}