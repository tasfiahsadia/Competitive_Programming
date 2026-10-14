#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) 
            cin >> a[i];

        sort(a.rbegin(), a.rend());
        int count = min(k, n-1) + 1, sum = 0;

        for(int i = 0; i < count; i++)
                sum += a[i];
        cout << sum << endl;
    }
    return 0;
}