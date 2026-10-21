#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        long long m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        sort(a.begin(), a.end());
        long long p = 0;
        int count = 0;

        for(int i = 0; i < n; i++){
            p += a[i];
            int res = p*(p-1) / 2;
            if (res <= m) 
                count++;
            else 
                break;
        }
        cout << count << endl;
    }
    return 0;
}