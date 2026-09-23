#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        int work = 0;      
        int minute = 0;   
        
        while (work < n) {
            minute++;
            if (minute%k != 0) 
                work++;
        }      
        cout << minute << endl;
    }
}