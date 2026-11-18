#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        int match = 0;
        for(int i=1; i<n; i++){
            if (s[i] != s[i-1]) 
                match++;
        }

        if(k >= match) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}