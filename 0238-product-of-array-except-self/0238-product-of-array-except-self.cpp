class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> prifix(n,1);
    vector<int> suffix(n,1);
    vector<int> ans(n);
    //prifix
    for(int i = 1 ; i < n ; i++)
    {
        prifix[i]=nums[i-1]*prifix[i-1];
    }
    //suffix
    for(int i = n-2 ; i >= 0 ; i--)
    {
        suffix[i]=nums[i+1]*suffix[i+1];
    }
    //ans
    for(int i = 0; i < n  ; i++)
    {
        ans[i]=prifix[i]*suffix[i];
    }
    return ans;

    }
};