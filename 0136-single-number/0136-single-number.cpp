class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // <------------------------------------------------->
        // THIS IS BRUTEFORCE APPROCH;
        // <------------------------------------------------->
        // int n =nums.size();
        // for (int i = 0; i < n; i++) {
        //     int a;
        //     int count = 0;

        //     for (int j = 0; j < n; j++) {
        //         if (nums[i] == nums[j]) {
        //             count++;
        //         }
        //     }

        //     a = nums[i];
        //     if (count == 1)
        //         return a;
        // }
        // return -1;

        // <------------------------------------------------->
        // BETTER APPROCH -1
        // <------------------------------------------------->

        // int count = 1;
        // int i = 0;
        // int n = nums.size();

        // sort(nums.begin(), nums.end());

        // for (int j = 1; j < n; j++) {
        //     if (nums[i] == nums[j]) {
        //         count++;
        //     } else {
        //         if (count == 1) {
        //             return nums[i];
        //         }

        //         i = j;
        //         count = 1; // count reset
        //     }
        // }

        // Last element / group check if (count == 1) { return nums[i]; }

        // return -1;
        // <------------------------------------------------->
        // BETTER APPROCH - 2
        // <------------------------------------------------->
        unordered_map<int, int> hash;

        for (int x : nums) {
            hash[x]++;
        }

        for (int x : nums) {
            if (hash[x] == 1)
                return x;
        }

        return -1;
        // <------------------------------------------------->
        // THIS IS THE MOST OPTIMAL APPROCH
        // <------------------------------------------------->

        // int ans = 0;
        // for (int val : nums) {
        //     ans = ans ^ val;
        // }
        // return ans;
    }
};