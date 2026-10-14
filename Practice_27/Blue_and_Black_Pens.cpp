#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int res1 = 3*a;      
    int res2 = a+b;      
    cout << min(res1,res2) << endl;

    return 0;
}