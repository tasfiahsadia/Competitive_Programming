#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n, m;
        int k;
        cin >> n >> m >> k;

        vector<pair<int,int>> p(k);
        for(int i=0; i<k; i++) 
            cin >> p[i].first >> p[i].second;
        sort(p.begin(), p.end());

        vector<int> dp(k, 1);
        int best = 0;
        for(int i=0; i<k; i++){
            for(int j=0; j<i; j++){
                if(p[j].second <= p[i].second)      // y কমেনি
                    dp[i] = max(dp[i], dp[j]+1);
            }
            best = max(best, dp[i]);
        }

        cout << (n+m) + (best-1) << endl;
    }
    
    return 0;
}