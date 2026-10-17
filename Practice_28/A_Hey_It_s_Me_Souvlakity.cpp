#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int k;
        k = count(s.begin(), s.end(), '1');

        if(k == 1)
            puts("0");
        else if(k == 2) 
            puts("1");
        else{
            int first = s.find('1');
            int last = s.rfind('1');
            cout << last - first << endl;
        }
    }

    return 0;
}