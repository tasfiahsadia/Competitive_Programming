#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        char c = 'R';
        int ans = 0;

        for(int i = 0; i < n; i++){
            if(c != s[i]){
                ans++;       
                c = s[i];
            }
            if(c == 'R') 
                c = 'B';
            else 
                c = 'R';
        }
        cout << ans << endl;
    }

    return 0;
}