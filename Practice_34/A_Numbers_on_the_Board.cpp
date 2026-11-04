#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;

        if(l>0 || r<0) 
            cout << r-l << '\n';
        else {
            int a = -l, b = r;    
            if (a == b) 
                cout << 0 << '\n';
            else 
                cout << abs(a-b) - 1 << '\n';
        }
    }

    return 0;
}