class Solution {
public:
    bool check(vector<int>& nums) {
        int ctr = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            // Check adjacent elements, wrapping around at the end
            if (nums[i] > nums[(i + 1) % n]) {
                ctr++;
            }
        }
        
        // A valid rotated sorted array can have at most 1 drop
        return ctr <= 1;
    }
};
