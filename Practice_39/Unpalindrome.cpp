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
        vector<int> a(n);
        for (auto &v : a) 
            cin >> v;

        int i=0, j = n-1;
        while(i<j && a[i] == a[j]){ 
            i++;
            j--;
        }
        if(i >= j) 
            cout << "NO" << '\n';
        else{
            int x = 1;
            while(x == a[i] || x == a[j]) 
                x++;
            cout << "YES " << x << '\n';
        }
    }
    return 0;
}