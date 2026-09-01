#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    int left = 0, right = n - 1;
    long long sereja = 0, dima = 0;
    int flag = 1;
    
    while (left <= right) {
        int val;
        if (a[left] > a[right]) {
            val = a[left];
            left++;
        } 
        else {
            val = a[right];
            right--;
        }
        
        if (flag == 1) 
            sereja += val;
        else 
            dima += val;
        
        flag = !flag;
    }
    
    cout << sereja << " " << dima;
}