class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        // for(int i = 1 ; i < nums.size(); i++) nums[i]=nums[i]+nums[i-1];
        // return nums;
        vector<int> v(n);
        v[0] = nums[0];
        for(int i = 1 ; i < n ; i++)
        {
           v[i] = v[i-1]+nums[i]; 
        }
        return v;
    }
};