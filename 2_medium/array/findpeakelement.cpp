class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int n=nums.size();
        int l=0, e=n-1;
        while(l<e)
        {
            int m1=l+(e-l)/2;
            int m2=m1+1;
            if(nums[m1]<nums[m2])
                l=m2;
            else
                e=m1;
        }
        return l;
        
    }
};