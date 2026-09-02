#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cost = (n/2) * 30 + (n%2) * 20;
        cout << cost << endl;
    }
}