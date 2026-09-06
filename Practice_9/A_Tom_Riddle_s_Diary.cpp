#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_set<string> s; 
    
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        
        if (s.count(name)) 
            cout << "YES" << endl;
        else {
            cout << "NO" << endl;
            s.insert(name); 
        }
    }
}