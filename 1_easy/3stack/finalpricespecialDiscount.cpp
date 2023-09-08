class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        stack<int>st;
        vector<int>res(prices.size());
        for(int i = prices.size()-1 ;i>=0;i--)
        {
            while(st.empty()==false&&st.top()>prices[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                res[i] = prices[i];
            }
            else res[i] = prices[i]-st.top();
            st.push(prices[i]);
        }
        return res ;
    }
};