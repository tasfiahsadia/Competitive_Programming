#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        long long count[11][11];
        memset(count, 0, sizeof(count));
        
        for(int i = 0; i < n; i++){
            char s[3];
            scanf("%s", s);
            int x = s[0] - 'a';
            int y = s[1] - 'a';
            count[x][y]++;
        }
        
        long long ans = 0;
        
        for(int x = 0; x < 11; x++){
            long long row_sum = 0, sum = 0;
            for(int y = 0; y < 11; y++){
                row_sum += count[x][y];
                sum += count[x][y] * count[x][y];
            }
            ans += (row_sum * row_sum - sum) / 2;
        }
        
        for(int y = 0; y < 11; y++){
            long long col_sum = 0, sum2 = 0;
            for(int x = 0; x < 11; x++){
                col_sum += count[x][y];
                sum2 += count[x][y] * count[x][y];
            }
            ans += (col_sum * col_sum - sum2) / 2;
        }
        
        cout << ans << endl;
    }    
}