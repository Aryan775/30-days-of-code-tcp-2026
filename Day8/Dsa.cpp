class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> a;
        for (int n : nums){
            a.insert(n);
        }
        int longest = 0;
        for (int n : a){
            if (a.find(n-1) == a.end()){
                int b = n+1;
                while (a.find(b) != a.end()){
                    b++;
                }
                longest = max(longest,b-n);
            }
        }
        return longest;
    }
};