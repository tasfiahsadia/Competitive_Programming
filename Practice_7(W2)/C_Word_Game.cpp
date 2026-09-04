#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<string> words[3];
        for (int i = 0; i < 3; i++) {
            words[i].resize(n);
            for (int j = 0; j < n; j++) 
                cin >> words[i][j];
        }

        unordered_map<string, int> freq;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) 
                freq[words[i][j]]++;
        }
        
        long long points[3] = {0, 0, 0};
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                int cnt = freq[words[i][j]];
                if (cnt == 1) 
                    points[i] += 3; 
                else if (cnt == 2) 
                    points[i] += 1;
                
            }
        }       
        cout << points[0] << " " << points[1] << " " << points[2] << "\n";
    }
}