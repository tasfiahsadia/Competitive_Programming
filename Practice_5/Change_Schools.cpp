#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    vector<int> count(k+1, 0);
    for(int i=0; i<n; i++)
        count[a[i]]++;

    int max_count = 0;
    for(int i=1; i<=k; i++){
        if(count[i] > max_count)
            max_count = count[i];
    }

    int sum = 0;
    for(int i=1; i<=k; i++){
        if(count[i] == max_count || count[i] == max_count - 1)
            sum++;
    }
    cout << sum << endl;
}