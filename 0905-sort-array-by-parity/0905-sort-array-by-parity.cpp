class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    //     int n= nums.size();
    //     vector<int> even;
    //     vector<int> odd;
    //     for(int x : nums)
    //     {
    //         if(x%2==0)
    //         {
    //             even.push_back(x);
    //         }
    //         else{
    //             odd.push_back(x);
    //         }
    //     }
    //     for(int i = 0 ; i < odd.size() ; i++)
    //     {
    //         even.push_back(odd[i]);
    //     }
    // return even;
        int j = 0;
        for(int i = 0 ; i < nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
    return nums;
    }
};