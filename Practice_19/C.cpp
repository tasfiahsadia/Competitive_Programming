#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        long long b, c;
        cin >> b >> c;
        long long g = __gcd(b, c);
        cout << c/g << endl;
    }
    return 0;
}