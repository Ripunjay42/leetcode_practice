class Solution {
public:
    string makeGood(string s) {
        
        
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && (st.top()==char(s[i]+32) || st.top()==char(s[i]-32)))
                st.pop();
            else
                st.push(s[i]);
        }
        
        string ans;
        
        while(!st.empty())
        {
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
    }
};