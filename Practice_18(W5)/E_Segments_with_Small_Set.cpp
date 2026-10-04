#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    vector<int> cnt(100001, 0);
    int distinct = 0;
    int left = 0;
    long long ans = 0;

    for (int right = 0; right < n; right++) {
        if (cnt[a[right]] == 0)
            distinct++;
        cnt[a[right]]++;

        while (distinct > k) {
            cnt[a[left]]--;
            if (cnt[a[left]] == 0)
                distinct--;
            left++;
        }

        ans += right - left + 1;
    }

    cout << ans << endl;

    return 0;
}