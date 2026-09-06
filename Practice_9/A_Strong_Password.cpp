#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int pos = -1;

        for (int i = 0; i + 1 < n; i++) {
            if (s[i] == s[i+1]) {
                pos = i; 
                break;
            }
        }

        char c;
        string result;

        if (pos != -1) {
            for (char ch = 'a'; ch <= 'z'; ch++) {
                if (ch != s[pos]) {
                    c = ch;
                    break;
                }
            }

            result = s.substr(0, pos+1) + c + s.substr(pos+1);
        } 
        else {
            for (char ch = 'a'; ch <= 'z'; ch++) {
                if (ch != s[0]) {
                    c = ch;
                    break;
                }
            }
            result = c + s;
        }
        cout << result << endl;
    }
}