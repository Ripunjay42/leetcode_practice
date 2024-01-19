class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int, int> mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        int cnt=0;
        for(auto j:mp)
        {
            if(j.second<2)
            {
                return -1;
            }
            cnt+=((j.second+2)/3);
        }
        return cnt;
    }
};