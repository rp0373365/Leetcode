class Solution {
public:
    int revInteger(int n)
    {
        long long rev = 0;
        int ld;
        while(n>0)
        {
           ld = n%10;
           rev = (rev*10)+ld;
           n = n/10;
        }
        return rev;
    }
    bool isPalindrome(int x) {
        int res = revInteger(x);
        if(x==res)
        {
            return true;
        }
        return false;

    }
};