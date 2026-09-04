#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        
        vector<bool> removed(n, false);
        vector<int> low, up;
        
        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (c == 'b') {
                if (!low.empty()) {
                    int index = low.back();
                    low.pop_back();
                    removed[index] = true;
                }
                removed[i] = true; 
            } 
            else if (c == 'B') {
                if (!up.empty()) {
                    int index = up.back();
                    up.pop_back();
                    removed[index] = true;
                }
                removed[i] = true;
            } 
            else if (islower(c)) 
                low.push_back(i);
            else 
                up.push_back(i);
        }
        
        string result;
        result.reserve(n);
        for (int i = 0; i < n; i++) {
            if (!removed[i]) 
                result += s[i];
        }
        cout << result << endl;
    }
}