class Solution {
  public:
    vector<int> firstNegInt(vector<int> &a, int k) {
        vector<int> result;
        queue<int> q; 

        for (int i = 0; i < k; i++) {
            if (a[i] < 0) 
                q.push(i);
        }

        for (int i = k; i < a.size(); i++) {
            if (!q.empty()) 
                result.push_back(a[q.front()]);
            else 
                result.push_back(0);

            while (!q.empty() && q.front() <= i - k) 
                q.pop();

            if (a[i] < 0) 
                q.push(i);
        }

        if (!q.empty()) 
            result.push_back(a[q.front()]);
        else 
            result.push_back(0);

        return result;
    }
};