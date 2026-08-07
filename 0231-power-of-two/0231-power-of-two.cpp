class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
        {
            return true;
        }
        double m = (double)n;
        while(m>1)
        {
            m=m/2;
        }
        if(m==1)
        {
            return true;
        }
        return false;
    }
};