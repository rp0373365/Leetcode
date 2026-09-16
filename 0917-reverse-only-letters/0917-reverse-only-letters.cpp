class Solution {
public:
    bool islatter(char c)
    {
        if((c>='a' && c<='z')||(c>='A' && c<='Z'))
        {
            return true;
        }
        return false;
    }
    string reverseOnlyLetters(string s) {
        int n = s.size();
        int i = 0 ;
        int j = n-1;
        while(i<j)
        {
            if(i<j && !islatter(s[i]))
            {
                i++;
            }
            else if(i<j && !islatter(s[j]))
            {
                j--;
            }
            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};