class Solution {
public:
    int countWays(vector<int>& nums)
    {
        int ans=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if((nums[i]<(i+1)) && (i+1 < n && nums[i+1]>i+1))
                ans+=1;
            else if((nums[i]<(i+1)) && (i+1==n))
                    ans+=1;
        }
        if(nums[0]>0)
                ans+=1;
        return ans;
    }
};