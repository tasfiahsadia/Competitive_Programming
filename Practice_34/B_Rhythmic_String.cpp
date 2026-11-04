#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++) 
            cin >> a[i];

        int best = 0;
        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<n; j++){
                if(a[j]%a[i] == 0) 
                    count++;
            }
            best = max(best, count);
        }
        cout << n-best << '\n';
    }

    return 0;
}