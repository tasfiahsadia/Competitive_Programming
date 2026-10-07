#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        s.insert(val); //logN
    }
    //set ero index nei
    for(auto it = s.begin(); it != s.end(); it++) //nlogn
        cout << *it << " "; 

    if(s.count(4)) //logN
        cout << "ache";
    else
        cout << "nai";

    return 0;
}

// eke normally reverse kora jay na, vector e niye reverse korte hobe