#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);

    long long sum = 0, min_odd = LLONG_MAX;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
        if(a[i] % 2 != 0)
            min_odd = min(min_odd, a[i]);
    }

    if(sum % 2 == 0)
        cout << sum;
    else
        cout << sum - min_odd;
}