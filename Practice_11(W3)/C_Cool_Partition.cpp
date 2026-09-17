#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++)
            cin >> a[i];

        vector<int> b(n+1, 0);
        vector<char> s(n+1, 0);
        for(int i = 1; i <= n; i++){
            int v = a[i];
            if(!s[v]){
                s[v] = 1;
                b[i] = b[i-1] + 1;
            } 
            else 
                b[i] = b[i-1];
        }

        vector<char> seg(n+1, 0);
        vector<int> touched;
        touched.reserve(n);

        int r = n, ans = 0;
        while(r > 0){
            int d = b[r];
            int l = r;
            int count = 0;
            touched.clear();

            while(count < d){
                int v = a[l];
                if(!seg[v]){
                    seg[v] = 1;
                    touched.push_back(v);
                    count++;
                }
                l--;
            }

            ans++;
            r = l;

            for(int v : touched) 
                seg[v] = 0;
        }

        cout << ans << endl;
    }
}