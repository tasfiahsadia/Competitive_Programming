#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> last(1001, 0);

        for(int i = 1; i <= n; i++){
            int a;
            cin >> a;
            last[a] = i;
        }

        vector<pair<int,int>> v;
        for(int x = 1; x <= 1000; x++){
            if(last[x]) 
                v.push_back({last[x], x});
        }
        sort(v.rbegin(), v.rend());

        int ans = -1;
        int m = v.size();
        for(int a = 0; a < m; a++){
            for(int b = a; b < m; b++){
                int sum = v[a].first + v[b].first;
                if(sum <= ans) 
                    break; 
                if(__gcd(v[a].second, v[b].second) == 1){
                    ans = sum;
                    break;
                }
            }
        }

        cout << ans << '\n';
    }
    return 0;
}