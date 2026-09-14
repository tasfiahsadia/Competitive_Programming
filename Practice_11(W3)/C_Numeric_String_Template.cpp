#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<long long> b = a;
        sort(b.begin(), b.end());
        b.erase(unique(b.begin(), b.end()), b.end());
        
        vector<int> comp(n);
        for (int i = 0; i < n; i++) 
            comp[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        
        int m;
        cin >> m;
        
        vector<char> character(n, 0);
        int number[26];
        
        while (m--) {
            string s;
            cin >> s;
            
            bool right = true;
            
            if ((int)s.size() != n) 
                right = false;
            
            vector<int> num_pos;
            vector<int> char_pos;
            
            fill(begin(number), end(number), -1);
            
            if (right) {
                for (int i = 0; i < n; i++) {
                    int num = comp[i];
                    char ch = s[i];

                    if (character[num] == 0) {
                        character[num] = ch;
                        num_pos.push_back(num);
                    } 
                    else if (character[num] != ch) {
                        right = false;
                        break;
                    }

                    int idx = ch - 'a';
                    if (number[idx] == -1) {
                        number[idx] = num;
                        char_pos.push_back(idx);
                    } 
                    else if (number[idx] != num) {
                        right = false;
                        break;
                    }
                }
            }

            for (int pos : num_pos) 
                character[pos] = 0;
            for (int pos : char_pos) 
                number[pos] = -1;
            
            cout << (right ? "YES" : "NO") << endl;
        }
    }
}