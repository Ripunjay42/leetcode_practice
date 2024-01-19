class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n=nums.size();
        int cnt=0;
        int maxn=INT_MIN;
        for(auto i:nums)
        {
            if(i==1)
                cnt++;
            maxn=max(maxn,cnt);
            if(i==0)
            {
                cnt=0;
            }
        }
        return maxn;    
    }
};