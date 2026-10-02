#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string st;                      
        for (char c : s) {
            if (!st.empty() && st.back() == c)
                st.pop_back();        
            else
                st.push_back(c);
        }

        if (st.empty()) 
            cout << "YES" << endl;          
        else 
            cout << "NO" << endl;
    }
    return 0;
}