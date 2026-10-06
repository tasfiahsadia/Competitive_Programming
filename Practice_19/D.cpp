#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        long long n;
        int k;
        cin >> n >> k;

        if(n%4 == 0){
            if(k == 0) 
                cout << "Off" << endl;
            else 
                cout << "On" << endl;
        } 
        else{
            if(k == 0) 
                cout << "On" << endl;
            else 
                cout << "Ambiguous" << endl;
        }
    }
    return 0;
}