#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> b(n);
        for(int i = 0; i < n; i++){
            long long a;
            cin >> a;
            b[i] = a - (i + 1); 
        }
        sort(b.begin(), b.end());
        b.erase(unique(b.begin(), b.end()), b.end());

        int best = 1, current = 1;
        for(size_t i = 1; i < b.size(); i++){
            if(b[i] == b[i-1] + 1){
                current++;
                best = max(best, current);
            } 
            else 
                current = 1;
        }
        cout << best << endl;
    }
}