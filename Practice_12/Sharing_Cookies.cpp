#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int sum = a + b;
    
    if (sum%2 != 0) 
        cout << -1 << endl;
    else {
        int diff = (a-b) / 2;
        cout << diff << endl;
    }
}