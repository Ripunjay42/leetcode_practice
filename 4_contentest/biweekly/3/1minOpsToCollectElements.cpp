class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        reverse(nums.begin(),nums.end());
        int cnt=0;
        set<int> s;
        bool flag=false;
        for(auto i:nums)
        {
            if(i<=k)
            {
                s.insert(i);
            }
            cnt++;
            if(s.size()==k)
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
            {
                return cnt;
            }
        return -1; 
    }
};