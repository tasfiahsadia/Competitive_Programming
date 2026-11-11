#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,d;
        cin >> n >> d;
        vector<int> a(n), b(n);

        int sum_a = 0, sum_b = 0, min_sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum_a += a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            sum_b += b[i];
        }
        for(int i=0; i<n; i++)
            min_sum += min(a[i], b[i]);

        int res1, res2, res3;
        res1 = d + sum_a;
        res2 = d + sum_b;
        res3 = 2*d + min_sum;
        cout << min({res1, res2, res3}) << '\n';
    }
    
    return 0;
}