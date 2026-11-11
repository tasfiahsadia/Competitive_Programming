#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        string dbl = s+s;
        int count = 0;
        for(int i=0; i<n; i++){
            int a = dbl[i]-'0', b = dbl[i+1]-'0';
            if((10*a + b) % 4 == 0) 
                count++;
        }
        cout << count << '\n';
    }
    
    return 0;
}