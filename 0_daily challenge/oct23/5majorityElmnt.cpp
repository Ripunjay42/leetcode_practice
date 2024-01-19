class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int, int> mp;
        vector<int> ans;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto j:mp)
        {
            if(j.second>n/3)
                ans.push_back(j.first);
        }    
        return ans;
    }
};