#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    long long sum = 0;
    int left = 0;
    long long ans = 0;

    for (int right = 0; right < n; right++) {
        sum += a[right];

        while (sum >= s) {
            ans += n - right;
            sum -= a[left];
            left++;
        }
    }

    cout << ans << endl;

    return 0;
}