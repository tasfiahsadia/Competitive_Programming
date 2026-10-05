#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<long long, int> prefixIndex; 
        long long sum = 0;
        int maxlen = 0;

        for (int i = 0; i < (int)arr.size(); i++) {
            sum += arr[i];

            if (sum == k) 
                maxlen = i + 1;

            auto it = prefixIndex.find(sum - k);
            if (it != prefixIndex.end()) {
                maxlen = max(maxlen, i - it->second);
            }

            if (prefixIndex.find(sum) == prefixIndex.end()) 
                prefixIndex[sum] = i;
        }

        return maxlen;
    }
};

int main() {
    Solution s;

    vector<int> a1 = {10, 5, 2, 7, 1, -10};
    cout << s.longestSubarray(a1, 15) << endl;  

    vector<int> a2 = {-5, 8, -14, 2, 4, 12};
    cout << s.longestSubarray(a2, -5) << endl;  

    vector<int> a3 = {10, -10, 20, 30};
    cout << s.longestSubarray(a3, 5) << endl;   

    return 0;
}