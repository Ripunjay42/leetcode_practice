class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long int res=0,sum=0;
        map<int,int> m;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            sum+=nums[i];
            if(i-s+1 > k) 
            {
                m[nums[s]]--;
                if(m[nums[s]]==0) 
                    m.erase(nums[s]);
                sum-=nums[s];
                s++;
            }
            if(i-s+1 == k and m.size()==k)
            {
                res=max(res,sum);
            }
        }
        return res;
    }
};