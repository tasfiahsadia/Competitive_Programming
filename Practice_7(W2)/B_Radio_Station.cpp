#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    unordered_map<string, string> ip_name;
    
    for(int i = 0; i < n; i++){
        string name, ip;
        cin >> name >> ip;
        ip_name[ip] = name;
    }
    
    for(int i = 0; i < m; i++){
        string command, ip_semi;
        cin >> command >> ip_semi;
        
        string ip = ip_semi.substr(0, ip_semi.size()-1); 
        string name = ip_name[ip];
        
        cout << command << " " << ip_semi << " #" << name << endl;
    }
}