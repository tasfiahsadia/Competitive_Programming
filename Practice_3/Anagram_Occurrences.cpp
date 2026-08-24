#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, p;
    cin >> s;
    cin >> p;

    int n = s.length();
    int m = p.length();

    int s_count[26] = {0};
    int p_count[26] = {0};

    for (int i = 0; i < m; i++) 
        p_count[p[i] - 'a']++;

    for (int i = 0; i < m; i++)
        s_count[s[i] - 'a']++;

    int found = 0;
    int match = 1;

    for (int i = 0; i < 26; i++) {
        if (s_count[i] != p_count[i]) {
            match = 0;
            break;
        }
    }
    if (match == 1) {
        cout << 0 << " ";
        found = 1;
    }

    for (int start = 1; start <= n-m; start++) {

        char leftChar = s[start - 1];        
        char rightChar = s[start + m - 1]; 

        s_count[leftChar - 'a']--;
        s_count[rightChar - 'a']++;

        match = 1;
        for (int i = 0; i < 26; i++) {
            if (s_count[i] != p_count[i]) {
                match = 0;
                break;
            }
        }

        if (match == 1) {
            cout << start << " ";
            found = 1;
        }
    }

    if (found == 0) {
        cout << -1;
    }
}