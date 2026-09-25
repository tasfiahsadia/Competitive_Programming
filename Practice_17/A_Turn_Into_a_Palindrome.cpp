#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        
        int coin = 0;
        int i = 0, j = n-1;
        while (i < j) {
            if (s[i] == s[j]) 
                coin += 0;
            else if (s[i] == c || s[j] == c) 
                coin += 1;
            else
                coin += 2;
            i++;
            j--;
        }       
        cout << coin << endl;
    }
    return 0;
}