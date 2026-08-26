#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        int sum = 0;
        for(int i=0; i<n; i++){
            sum = max(sum, a[i]); //for single item
            for(int j=i+1; j<n; j++){
                if(a[i] <= a[j])
                    sum = max(sum, a[i] + a[j]); 
            }
        }
        cout << sum << endl;
    }
}