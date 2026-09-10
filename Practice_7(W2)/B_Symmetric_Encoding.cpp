#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;
        
        bool pre[26] = {false};
        for (char c : b) 
            pre[c - 'a'] = true;
  
        string r;
        for (int i = 0; i < 26; i++) 
            if (pre[i]) 
                r += (char)('a' + i);
        
        int m = r.size();
        
        char map_char[26];
        for (int i = 0; i < m; i++) 
            map_char[r[i] - 'a'] = r[m - 1 - i];
        
        string s = b;
        for (int i = 0; i < n; i++) 
            s[i] = map_char[b[i] - 'a'];
        
        cout << s << endl;
    }
}