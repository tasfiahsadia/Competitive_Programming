#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int freq[26];
    for (int i = 0; i < 26; i++) {
        freq[i] = 0; 
    }

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (isalpha(ch)) {         
            ch = tolower(ch);       
            int index = ch - 'a';   
            freq[index]++;
        }
    }

    int count = 0;
    char ans = 'a';

    for (int i = 0; i < 26; i++) {
        if (freq[i] > count) {
            count = freq[i];
            ans = 'a' + i;
        }
    }

    cout << ans;
}