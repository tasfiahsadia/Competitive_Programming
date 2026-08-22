#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    vector<int> prefix_sum(n);
    prefix_sum[0] = a[0];
    for(int i = 1; i < n; i++)
        prefix_sum[i] = prefix_sum[i-1] + a[i];
    
    int min = INT_MAX;
    int sub;
    for(int i = 0; i < n-1; i++){
        sub = abs(prefix_sum[i] - (prefix_sum[n-1] - prefix_sum[i]));
        if(sub < min)
            min = sub;
    }
    cout << min;
}