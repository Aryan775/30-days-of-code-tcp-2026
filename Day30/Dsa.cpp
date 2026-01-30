//Back-end complete function Template for C++
class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector<int> res;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0, j = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] < b[j]) {
                i++;
            } else if (a[i] > b[j]) {
                j++;
            } else {
                if (res.empty() || res.back() != a[i]) {
                    res.push_back(a[i]);
                }
                i++;
                j++;
            }
        }
        return res;
    }
};