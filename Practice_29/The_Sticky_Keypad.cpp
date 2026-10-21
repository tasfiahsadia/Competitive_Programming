#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n;
        int d;
        cin >> n >> d;

        while(true){
            string s = to_string(n);
            int pos = -1;
            
            for(int i = 0; i < (int)s.size(); i++){
                if (s[i]-'0' == d){ 
                    pos = i; 
                    break; 
                }
            }

            if(pos == -1) 
                break;

            long long p = 1;
            for(int i = 0; i < (int)s.size()-pos-1; i++) 
                p *= 10;
            n = (n/p + 1) * p;
        }
        cout << n << endl;
    }

    return 0;
}