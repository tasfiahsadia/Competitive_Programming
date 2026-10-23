#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        int run = 0, best = 0;
        for(char c : s){
            if(c == '1'){
                run++;
                best = max(best, run);
            } 
            else 
                run = 0;
        }

        if(best >= k){
            cout << "NO" << endl;
            continue;
        }

        vector<int> p(n);
        int big = n, small = 1;
        for(int i = 0; i < n; i++){
            if (s[i] == '0') 
                p[i] = big--;
            else 
                p[i] = small++;
        }

        cout << "YES" << endl;
        for (int i = 0; i < n; i++) 
            cout << p[i] << " ";
        cout << endl;
    }

    return 0;
}