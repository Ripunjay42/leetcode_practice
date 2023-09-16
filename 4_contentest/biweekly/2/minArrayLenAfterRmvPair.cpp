class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) 
    {
        map<int,int> mp;
        for(auto i:nums)
            mp[i]++;
        int ans=nums.size();
        int Max=0;
        for(auto i:mp)
            Max=max(Max,i.second);
        ans=2*Max-nums.size();
        if(ans<0)
            return nums.size()&1;
        else 
            return ans;
    }
};