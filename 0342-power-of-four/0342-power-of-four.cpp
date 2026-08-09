class Solution {
public:
    bool isPowerOfFour(int n) {
        double m = (double)n;
        if(m<=0)
        {
            return false; 
        }
        if(m==1)
        {
            return true;
        }
        while(m>1)
        {
            m=m/4;
        }
        if(m!=1)
        {
            return false;
        }
        return true ;
    }
};