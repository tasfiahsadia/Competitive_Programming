#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;

        if(b == 1) 
            cout << "NO\n";
        else if(b == 2){ 
            cout << "YES\n";
            cout << a << " " << 3*a << " " << 4*a << '\n';
        } 
        else{
            cout << "YES\n";
            cout << a << " " << a*(b-1) << " " << a*b << '\n';
        }
    }

    return 0;
}