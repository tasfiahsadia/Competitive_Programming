#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum = 0;

        long long x = 1;
        while(x <= n){
            long long z = n/x, y = n/z;
            sum += z*(y-x + 1);
            x = y+1;
        }
        cout << sum-n << endl;
    }
    return 0;
}