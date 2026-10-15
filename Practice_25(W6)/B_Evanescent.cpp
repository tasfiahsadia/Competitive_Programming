#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int base = 1;
        for (int i = 1; i < n; i++){
            if (s[i] != s[i-1]) 
                base++;
        }

        int best = 0;
        for (int i = 1; i < n-1; i++){
            if (s[i-1] == s[i+1] && s[i] != s[i-1])
                best = max(best, 2);         
            else if (s[i] != s[i-1] && s[i] != s[i+1])
                best = max(best, 1);        
        }
        cout << base - best << endl;
    }
    return 0;
}