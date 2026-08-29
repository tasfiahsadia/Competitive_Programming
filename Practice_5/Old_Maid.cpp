#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];

    map<int,int> fre;
    for(int i=0; i<n; i++)
        fre[a[i]]++;

    int sum = 0;
    for(auto &c : fre){
        if(c.second % 2 == 1) 
            sum += c.first;
    }
    cout << sum << endl;
}