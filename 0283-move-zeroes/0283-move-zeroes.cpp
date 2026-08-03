class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        for(int i = 0 ; i<n ;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(nums[i]==0)
                {
                    swap(nums[i],nums[j]);
                }
            }
        }

    }
};