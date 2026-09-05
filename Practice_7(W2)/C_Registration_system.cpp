#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    unordered_map<string,int> count;
    
    for(int i = 0; i < n; i++){
        char a[35];
        cin >> a;
        string s(a);
        
        auto it = count.find(s);
        if(it == count.end()){
            count[s] = 0;
            cout << "OK" << endl;
        } 
        else {
            it->second++;                   
            cout << s << it->second << endl;
        }
    }
}