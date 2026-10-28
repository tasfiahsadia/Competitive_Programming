#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int ans = 0, i = 0;
        while(i+2 < n){
            if(s[i] == s[i+1] && s[i+1] == s[i+2]){
                ans++;
                i += 3;
            } 
            else
                i++;
        }
        cout << ans << "\n";
    }

    return 0;
}