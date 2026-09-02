#include<bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cin >> s;

    int sum = 0;
    for(int i = 1; i < 5; i++){
        sum += i;
    }
    cout << sum-s << endl;
}