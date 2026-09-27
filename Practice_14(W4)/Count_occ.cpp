class Solution {
  public:
    int search(string &pat, string &txt) {
        int n = txt.size();
        int k = pat.size();
        
        vector<int> patCount(26, 0);
        vector<int> windowCount(26, 0);
        
        for (char c : pat) 
            patCount[c - 'a']++;
        
        for (int i = 0; i < k; i++) 
            windowCount[txt[i] - 'a']++;
        
        int count = 0;
        if (windowCount == patCount) 
            count++;
        
        for (int i = k; i < n; i++) {
            windowCount[txt[i] - 'a']++;
            windowCount[txt[i - k] - 'a']--;

            if (windowCount == patCount) 
                count++;
        }
        return count;
    }
};