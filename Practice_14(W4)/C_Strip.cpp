#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l;
    long long s;
    cin >> n >> s >> l;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) 
        cin >> a[i];

    const int INF = 1e9;
    vector<int> dp(n + 1, INF);
    dp[0] = 0;

    deque<int> mx, mn;  
    deque<int> dq;      

    int left = 1;         

    for(int i = 1; i <= n; i++) {
        while (!mx.empty() && a[mx.back()] <= a[i]) 
            mx.pop_back();
        mx.push_back(i);

        while(!mn.empty() && a[mn.back()] >= a[i]) 
            mn.pop_back();
        mn.push_back(i);

        while(a[mx.front()] - a[mn.front()] > s) {
            left++;
            if (mx.front() < left) mx.pop_front();
            if (mn.front() < left) mn.pop_front();
        }

        int h = i - l;
        if(h >= 0 && dp[h] < INF) {
            while (!dq.empty() && dp[dq.back()] >= dp[h]) 
                dq.pop_back();
            dq.push_back(h);
        }

        while (!dq.empty() && dq.front() < left - 1) 
            dq.pop_front();

        if (!dq.empty()) 
            dp[i] = dp[dq.front()] + 1;
    }

    if (dp[n] >= INF) 
        cout << -1 << endl;
    else 
        cout << dp[n] << endl;
}