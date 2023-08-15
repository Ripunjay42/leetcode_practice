class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> st;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==')')
                st.pop();
            if(st.size()!=0)
                ans+=s[i];
            if(s[i]=='(')
                st.push(s[i]);
            
        }
        return ans;
    }
};