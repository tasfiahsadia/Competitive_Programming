#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long p = 0;

        for(int i=1; i<=n; i++){
            long long a;
            cin >> a;

            if(i%2 == 1) 
                p += a;
            else 
                p -= a;
        }

        cout << p << endl;
    }

    return 0;
}