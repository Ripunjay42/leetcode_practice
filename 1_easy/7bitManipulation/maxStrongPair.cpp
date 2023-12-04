class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) 
    {
        int ans=0;
        for(auto i:nums)
        {
            for(auto j:nums)
            {
                if(abs(i-j)<=min(i,j))
                {
                    ans=max(ans,i^j);
                }
            }
        }
        return ans;
    }
};