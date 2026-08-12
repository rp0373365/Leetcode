class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++)
        {
            s.insert(nums[i]);
        }
        int i = 0 ;
        for(int x:s)
        {
            nums[i] = x;
            i++;
        }
        return i;
    }
};