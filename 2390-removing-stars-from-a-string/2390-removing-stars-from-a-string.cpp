class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        int n = s.size();
        string result = "";
        for(int i = 0 ; i < n ; i++)
        {
            if(st.empty()||s[i]!='*')
            {
                st.push(s[i]);
            }
            else if(s[i]=='*')
            {
                st.pop();
            }
        }
        while(!st.empty())
        {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};