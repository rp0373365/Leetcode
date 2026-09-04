class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int pos = 0;
        int neg = 1;
        vector<int>ans(n);
        for(int x : nums)
        {
            if(x%2==0)
            {
                ans[pos]=x;
                pos+=2;
            }
            else{
                ans[neg]=x;
                neg+=2;
            }
        }
        return ans;
    }
};