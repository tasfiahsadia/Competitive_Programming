#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, t;
    cin >> a >> b >> t;

    int total_biscuits = 0;
    for(float i=a; i<=t+0.5; i+=a)
        total_biscuits += b;
    cout << total_biscuits;
}