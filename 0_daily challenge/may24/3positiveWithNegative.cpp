class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
         unordered_map<int, int> mp;
         for(auto i:nums)
         {
            mp[i]++;
         }
         int ans=-1;
         for(auto j:nums)
         {
            if(mp[j]>=1 && mp[-j]>=1)
                ans=max(ans, j);
         } 
         return ans;  
    }
};