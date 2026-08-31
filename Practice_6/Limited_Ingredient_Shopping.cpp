#include<bits/stdc++.h>
using namespace std;

int main(){
    int w, n;
    cin >> w >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
        a.push_back(x); 
    }
    sort(a.rbegin(), a.rend());

    int ans = -1, count = 0;;
    long long sum = 0;
    for(int i=0; i<a.size(); i++){
        sum += a[i];
        count++;
        if(sum >= w){
            ans = count;
            break;
        }
    }     
    cout << ans;
}