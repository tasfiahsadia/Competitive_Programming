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
        long long ones = 0, mult = 1;
        for(int i=0; i<n; i++){
            long long x;
            cin >> x;
            if(x == 1) 
                ones++;
            else if(x == 0) 
                mult *= 2;
        }
        cout << ones*mult << '\n';
    }
    
    return 0;
}