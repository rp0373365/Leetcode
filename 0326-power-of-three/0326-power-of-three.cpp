class Solution {
public:
    bool isPowerOfThree(int n) {
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
            m=m/3;
        }
        if(m!=1)
        {
            return false;
        }
        return true ;
    }
};