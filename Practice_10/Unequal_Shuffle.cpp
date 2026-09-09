#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string A, B;
        cin >> A >> B;
        
        int countA_a = 0, countB_b = 0;
        
        for (int i = 0; i < n; i++) {
            if (A[i] == 'a') 
                countA_a++;  
            if (B[i] == 'b') 
                countB_b++;   
        }
        
        if (countA_a == countB_b) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}