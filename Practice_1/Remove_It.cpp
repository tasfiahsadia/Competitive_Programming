#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    vector<int> b;


    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] != x) 
            b.push_back(a[i]);;
    }   

    for(auto s : b)
        cout << s << " ";
    cout << endl;
}