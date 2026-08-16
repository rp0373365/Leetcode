class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
        k = k % n; // important

        vector<int> ans(n);

        // place each element at the rotated position
        for (int i = 0; i < n; i++) {
            ans[(i + k) % n] = nums[i];
        }

        // copy ans back to nums
        nums = ans;
    }
};