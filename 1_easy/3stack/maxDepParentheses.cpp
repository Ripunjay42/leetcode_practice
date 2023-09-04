class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max=INT_MIN;
     stack<char>st;
     for(auto i:s)
        {
            if(i=='(')
            {
                st.push(i);
                count++;
            }
            if(i==')'){
                st.pop();
                count=st.size();
            }
            if(count>max)
            max=count; 
        }
        return max;
    }
};