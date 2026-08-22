#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    
    int flag = 0;
    int i;
    for(i = a; i <= b; i++){
        if(i % c == 0){
            // ans = i;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout << -1;
    else
        cout << i;
}