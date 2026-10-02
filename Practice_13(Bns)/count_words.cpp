#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s); //1ta 1ta kore word alada kore
    string word;
    map<string, int> m;
    while(ss >> word)  //nlogn
        m[word]++; //logn
    
    for(auto it = m.begin(); it != m.end(); it++) //nlogn
        cout << it->first << " " << it->second << endl; //logn
    
    return 0;
}
