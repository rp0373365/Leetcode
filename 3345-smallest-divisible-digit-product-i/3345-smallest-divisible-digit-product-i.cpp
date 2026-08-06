class Solution {
public: 
    int product(int m)
    {
        int rev = 1 , ld;
        while(m>0)
        {
            ld = m%10;
            rev = (rev)*ld;
            m = m/10;
        }
        return rev;
    }
    void plusone(int i)
    {
        
    }
    int smallestNumber(int n, int t) {
        while(n<1000)
        {
            if(product(n)%t==0)
            {
                return n;
            }
            else{
                n++;
            }
        }
        return -1;
        // if(product(n)%t==0)
        // {
        //     return n;
        // }
        // else if(product(n+1)%t==0)
        // {
        //     return (n+1);
        // }
        // else if(product(n+2)%t==0)
        // {
        //     return (n+2);
        // }
        // else if(product(n+3)%t==0)
        // {
        //     return (n+3);
        // }
        // else if(product(n+4)%t==0)
        // {
        //     return (n+4);
        // }
        // else if(product(n+5)%t==0)
        // {
        //     return (n+5);
        // }else if(product(n+6)%t==0)
        // {
        //     return (n+6);
        // }
        // else if(product(n+7)%t==0)
        // {
        //     return (n+7);
        // }
        // else if(product(n+8)%t==0)
        // {
        //     return (n+8);
        // }
        // else if(product(n+9)%t==0)
        // {
        //     return (n+9);
        // }
        // else if(product(n+10)%t==0)
        // {
        //     return (n+10);
        // }
        // return -1;
    }
};