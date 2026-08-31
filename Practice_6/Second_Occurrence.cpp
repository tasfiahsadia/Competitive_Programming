#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    int x;
    cin >> x;

    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i] == x){
            count++;
            if(count == 2){
                cout << i << endl;
                return 0;
            }
        }
    }
    if(count == 1)
        cout << -2 << endl;
    else
        cout << -1 << endl;
}