#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, K;
    cin >> X >> Y >> K;
    
    int distance = abs(X - Y);
    
    if (distance <= K)
        cout << "YES";
    else
        cout << "NO";
}