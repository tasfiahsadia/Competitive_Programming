#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        int x = 0, y = 0;
        for (char c : s) {
            if (c == 'U') 
                y++;
            else if (c == 'D') 
                y--;
            else if (c == 'L') 
                x--;
            else if (c == 'R') 
                x++;
        }

        if ((abs(x) == 2 && y == 0) || (x == 0 && abs(y) == 2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}