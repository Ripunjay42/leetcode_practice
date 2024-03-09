class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        for(auto i: nums)
        {
            mp[i]++;
        }
        int max_n=0;
        for(auto i:mp)
        {
            max_n=max(max_n,i.second);
        }
        int cnt=0;
        for(auto i:mp)
        {
            if(i.second==max_n)
                cnt++;
        }  
        return cnt*max_n;     
    }
};