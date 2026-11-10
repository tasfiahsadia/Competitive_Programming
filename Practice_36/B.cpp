#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n%2 == 0 || n >= 7 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}