class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0 ;
        for(auto ch:s)
        {
            ans^=ch;
        }
        for(auto chr:t)
        {
            ans^=chr;
        }
        return ans;
    }
};