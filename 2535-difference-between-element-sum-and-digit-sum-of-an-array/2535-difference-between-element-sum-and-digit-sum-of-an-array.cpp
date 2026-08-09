class Solution {
public:
    int addDigit(int n)
    {
        int sum = 0 , ld;
        while(n>0)
        {
            ld = n%10;
            sum = sum+ld;
            n = n /10;
        }
        return sum ;
    }
    int addElementOfArray(vector<int>& num)
    {
        int sum = 0;
        for(int i = 0 ; i < num.size() ; i++)
        {
            sum = sum + num[i];
        }
        return sum ;
    }
    int differenceOfSum(vector<int>& nums) {
        int a = addElementOfArray(nums);
        int b = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            b = b + addDigit(nums[i]);
        }
        int res = abs(a-b);
        return res;
    }
};