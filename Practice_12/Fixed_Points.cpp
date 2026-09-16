#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        int remain = n-k;
        if (remain == 1) 
            cout << "No" << endl;
        else 
            cout << "Yes" << endl;
    }
}