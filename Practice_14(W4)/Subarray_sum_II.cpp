#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    map<long long, long long> freq;
    freq[0] = 1; 

    long long sum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        sum += a;

        auto it = freq.find(sum - x);
        if (it != freq.end()) 
            cnt += it->second;

        freq[sum]++;
    }

    cout << cnt << endl;
    return 0;
}