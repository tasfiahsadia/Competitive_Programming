#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int n = s.size();
        int freq[26] = {0};
        int distinct = 0;
        int left = 0;
        int ans = -1;

        for (int right = 0; right < n; right++) {
            if (freq[s[right] - 'a'] == 0)
                distinct++;
            freq[s[right] - 'a']++;

            while (distinct > k) {
                freq[s[left] - 'a']--;
                if (freq[s[left] - 'a'] == 0)
                    distinct--;
                left++;
            }

            if (distinct == k)
                ans = max(ans, right - left + 1);
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;               
    while (t--) {
        string s;
        int k;
        cin >> s >> k;     

        Solution obj;
        cout << obj.longestKSubstr(s, k) << endl;
    }
    return 0;
}