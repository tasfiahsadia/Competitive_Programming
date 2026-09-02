#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0;
    for(int i=0; i < n-k; i++){
        sum += a[i];
    }

    int max_sum = sum;
    for(int i = n-k; i < n; i++){
        sum += a[i] - a[i-(n-k)];
        max_sum = max(max_sum, sum);
    }
    cout << max_sum << endl;
    }
}