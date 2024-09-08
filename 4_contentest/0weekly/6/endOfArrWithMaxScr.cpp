class Solution {
public:
    long long findMaximumScore(vector<int>& nums) 
    {
        int n = nums.size();
        vector<long long> dp(n, 0);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            
            if (!st.empty()) {
                int j = st.top();
                dp[i] = (long long)(j - i) * nums[i] + dp[j];
            }
            
            if (st.empty()) {
                dp[i] = (long long)(n - 1 - i) * nums[i];
            }
        
            st.push(i);
        }
        
        return dp[0];
    }
};