#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> a;
    while(t--){
        int n;
        cin >> n;
        int b = 0, c = 0;
        bool find = true;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x<1 || x>1000000) 
                find = false;
            if(x%2 == 0) 
                b++;
            else 
                c++;
        }

        if(!find){
            cout << "-1" << endl;
            return 0;
        }
        
        if((c==1 && b==1) || (c==3 && b==0))
            a.push_back("Larpity");
        else
            a.push_back("Moggity");
    }

    for (auto &s : a) 
        cout << s << endl;

    return 0;
}