class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //THIS IS BRUTE FORCE APPROCH THAT IS NOT WORKING DUE TO CONSTRAIN 
        // int n = nums.size();
        // for(int i = 0 ; i < n ; i++)
        // {
        //     int count = 0 ;
        //     for(int j = 0 ; j < n ; j++)
        //     {
        //         if(nums[j]==nums[i])
        //         {
        //             count++;
        //         }
        //     }
        //     if(count > (n/2))
        //     {
        //         return nums[i];
        //     }
        // }
        // return -1;

        // TIME COMPLEXITY OF THIS ALGORITHM IS O(N^2) 

        //-----------------------------------------------------------------

        // THIS IS BETTER SOLUTION 
        int n = nums.size();
        sort(nums.begin(),nums.end());
        return (nums[n/2]);

        //TIME COMPLEXITY OF THIS ALGORITHM IS log(n);

        //------------------------------------------------------------------

        //THIS IS OPTIMAL SOLUTION  




    }
};