#include<bits/stdc++.h>
using namespace std;

int n;
long long k;
int a[10];

void solve(long long pos, long long sum){
    if(pos > n){
        if(sum == k){
            for(int i = 1; i <= n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
        return;
    }

    for(int value=0; sum + pos*value <= k; value++){
        a[pos] = value;
        solve(pos+1, sum + pos*value);
    }
}

int main(){
    cin >> n >> k;
    solve(1, 0);
}git 