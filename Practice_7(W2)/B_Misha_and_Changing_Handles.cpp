#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, string> s;
    
    for (int i = 0; i < n; i++) {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;
        
        string original_handle;
        
        if (s.find(old_handle) != s.end()) {
            original_handle = s[old_handle];
            s.erase(old_handle); 
        } 
        else 
            original_handle = old_handle;
        s[new_handle] = original_handle;
    }
    
    cout << s.size() << endl;
    for (auto &p : s) 
        cout << p.second << " " << p.first << endl;
}