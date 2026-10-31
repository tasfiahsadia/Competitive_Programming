#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        int res = x+y+z;

        char c;
        if(z >= x) 
            c = 'S';
        else if(y >= z) 
            c = 'R';
        else 
            c = 'P';

        for(int i=0; i<res; i++) 
            cout << c;
        cout << '\n';
    }

    return 0;
}