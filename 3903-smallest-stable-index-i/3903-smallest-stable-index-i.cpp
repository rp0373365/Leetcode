class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi;
        int mini;
        int mincnt = INT_MAX;
        int cnt;
        int res;
        for(int i = 0 ; i < n ; i++)
        {
            maxi = *max_element(nums.begin() , nums.begin()+i);
            mini = *min_element(nums.begin()+i , nums.end());
            res = maxi-mini;
            if(res<=k)
            {
                return i;
            }
        }
        return -1;
    }
};