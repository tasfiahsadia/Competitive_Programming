#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, a, y, b, d;
    cin >> x >> a >> y >> b >> d;

    if((x*a + y*b) >= d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}