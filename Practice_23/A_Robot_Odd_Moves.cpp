#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;

        if(a%2 == b%2){
            if(b <= a) 
                cout << a << endl;
            else 
                cout << -1 << endl;
        } 
        else{
            if(b <= a+1) 
                cout << a+1 << endl;
            else 
                cout << -1 << endl;
        }
    }
    return 0;
}