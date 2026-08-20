class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //<---------------------------->
        //BRUTEFORCE APPROCH
        //<---------------------------->
        // int n = nums.size();
        // for(int i = 0 ; i<n ;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(nums[i]==0)
        //         {
        //             swap(nums[i],nums[j]);
        //         }
        //     }
        // }

        //<---------------------------->
        //OPTIMAL APPROCH
        //<---------------------------->

        int n = nums.size();
        int j = -1;
        j = find(nums.begin(),nums.end(),0) - nums.begin();
        if(j==-1)
        {
            return;
        }
        for(int i = j+1 ; i < n ; i++ )
        {
            if(nums[i]!=0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }

    }
};