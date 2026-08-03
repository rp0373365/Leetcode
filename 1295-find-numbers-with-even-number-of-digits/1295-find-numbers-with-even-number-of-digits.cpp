class Solution {
public:
    int count(int n)
    {
        int cnt = 0;
        while(n>0)
        {
            n= n / 10;
            cnt++;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0;
        int res;
        for(int i = 0 ; i < n ; i++)
        {
            res = count(nums[i]);
            if(res%2==0)
            {
                cnt1++;
            }
        }
        return cnt1;
    }
};