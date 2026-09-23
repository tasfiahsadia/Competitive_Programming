#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n+1), prf(n + 2, 0), suf(n + 3, LLONG_MAX);

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            prf[i] = prf[i - 1] + a[i];
        }

        for (int i = n; i >= 1; i--)
            suf[i] = min(prf[i], suf[i + 1]);

        int g = -1;
        for (int i = 1; i <= n; i++) {
            if (prf[i] < 0) { 
                g = i; 
                break; 
            }
        }

        if(g == -1){                
            cout << "YES" << endl;
            continue;
        }

        int flag = false;
        for (int k=1; k<=g && k<=n; k++) {
            if (suf[k + 1] >= a[k]) {   
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }   
}