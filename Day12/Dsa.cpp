class Solution {
public:
   int first(vector<int> &nums, int target) {
        int l = 0, r = nums.size() - 1;
        int x = -1;

        while(l <= r) {
            int mid = l + (r - l) / 2; 

            if(nums[mid] == target) {
                x = mid;
                r = mid - 1;  
            } 

            else if(nums[mid] < target) {
                l = mid + 1;  
            } 

            else {
                r = mid - 1;  
            }
        }
        return x;
    }

    int last(vector<int> &nums, int target) {
        int l = 0, r = nums.size() - 1;
        int y = -1;

        while(l<= r) {
            int mid = l + (r- l) / 2; 

            if(nums[mid] == target) {
                y = mid;
                l = mid + 1;
            } 

            else if(nums[mid] < target) {
                l = mid + 1;  
            } 

            else {
                r = mid - 1; 
            }
        }
        return y;
    }

    vector<int> searchRange(vector<int> &nums, int target) {

        int a = first(nums, target); 
        
        if(a == -1) return {-1, -1};  
        int b = last(nums, target);  

        return {a, b};  
    }
};