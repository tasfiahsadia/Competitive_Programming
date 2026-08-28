#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        for(int i=0; i<n; i++){
            int b;
            string moves;
            cin >> b >> moves;

            int final_digit = a[i];
    
            for(int j = b-1; j >= 0; j--){
                if(moves[j] == 'U')
                    final_digit = (final_digit-1 + 10) % 10;
                else
                    final_digit = (final_digit + 1) % 10;       
            }
            cout << final_digit;

            if(i+1 < n) 
                cout << " ";
        }
        cout << endl;
    }
}