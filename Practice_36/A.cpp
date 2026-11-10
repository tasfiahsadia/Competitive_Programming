#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        int a, b, c, d;
        cin >> n;
        cin >> a >> b >> c >> d;
        int result = max(max(a, b), max(c, d));
        cout << result << endl;

    }

    return 0;
}