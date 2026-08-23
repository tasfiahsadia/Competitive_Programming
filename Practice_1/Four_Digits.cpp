#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s.length() < 4)
        s.insert(0, 4-s.length(), '0');
    cout << s << endl;
}