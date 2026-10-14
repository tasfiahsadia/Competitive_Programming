#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        int res1, res2; 
        res1 = a[n-2] - a[0];
        res2 = a[n-1] - a[1];
        cout << min(res1, res2) << endl;
    }
    return 0;
}