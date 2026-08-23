#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    char min_char;
    int flag = 1;

    for(auto i='a'; i<='z'; i++){
        int j;
        for(j=0; j<s.size(); j++){
            if(s[j] == i)
                break;
        }
        if(j == s.size()){
            min_char = i;
            flag = 0;
            break;
        }
    }
    
    if(flag == 1)
        cout << "None";
    else
        cout << min_char;
}