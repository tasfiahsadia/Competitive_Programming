#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    unordered_map<string,int> last_idx; 
    
    for(int i = 1; i <= n; i++){
        string name;
        cin >> name;
        last_idx[name] = i;  
    }

    vector<pair<int,string>> v;
    for(auto &p : last_idx)
        v.push_back({p.second, p.first});
    
    sort(v.begin(), v.end(), greater<pair<int,string>>());
    
    for(auto &p : v){
        cout << p.second << endl;
    }
}