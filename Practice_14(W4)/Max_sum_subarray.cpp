#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    int k;
    cin >> k;

    long long sum = 0;
    for (int i = 0; i < k; i++) 
        sum += a[i];
    
    long long max_sum = sum;
    for (int i = k; i < n; i++) {
        sum += a[i] - a[i-k];
        max_sum = max(max_sum, sum);
    }
    cout << "Maximum sum: " << max_sum << endl;
    
    return 0;
}