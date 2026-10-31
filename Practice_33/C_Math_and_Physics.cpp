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
        vector<int> a(n);
        long long s = 0;
        bool all_one = true;
        bool mid_big = false;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            s += a[i];
            if(a[i] >= 2) 
                all_one = false;
            if(i > 0 && i < n-1 && a[i] >= 2) 
                mid_big = true;
        }

        if (all_one) 
            cout << -1 << '\n';
        else if (mid_big) 
            cout << s-1 << '\n';
        else 
            cout << s - (n-1) << '\n';
    }

    return 0;
}