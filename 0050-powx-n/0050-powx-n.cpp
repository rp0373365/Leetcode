class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        bool isNegative=false;
        long long exp = n;

        if (exp < 0) {
            isNegative = true;
            exp = -exp;
        }
        while (exp > 0) {
            if (exp % 2 == 1) {
                ans = ans * x;
                exp = exp - 1;
            } else {
                exp = exp / 2;
                x = x * x;
            }
        }
        if (isNegative) {
            return (1 / (ans));
        }
        return (ans);
    }
};