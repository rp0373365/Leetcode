class Solution {
public:
    int add(int n)
    {
        int sum = 0 , ld;
        while(n>0)
        {
            ld = n%10;
            sum = sum + ld;
            n=n/10;
        }
        return sum;
    }
    int addDigits(int num) {
        int n = num;
        while(n>9)
        {
            n = add(n);
        }
        return n;
    }
};