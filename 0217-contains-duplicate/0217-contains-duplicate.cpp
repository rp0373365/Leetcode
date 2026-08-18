class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //<---------------------------------------->
        // BRUTE FORCE APPROCH
        //<---------------------------------------->
        // int n = nums.size();
        // unordered_set<int> st;
        // for(int i = 0 ; i < n ; i++)
        // {
        //     st.insert(nums[i]);
        // }
        // int m = st.size();
        // if(n!=m)
        // {
        //     return true;
        // }
        // return false;
        //<---------------------------------------->
        // OPTIMAL APPROCH
        //<---------------------------------------->

        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            ++mpp[nums[i]];
            if (mpp[nums[i]] > 1) return true;
        }
        return false;
    }
};