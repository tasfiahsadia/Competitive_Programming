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
        int minimum = INT_MAX;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            minimum = min(minimum, x);
        }

        if(minimum  <= n-1) 
            cout << n << '\n';
        else 
            cout << 0 << '\n';
    }
    return 0;
}