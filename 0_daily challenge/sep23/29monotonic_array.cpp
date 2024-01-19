class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int n=nums.size();
        bool inc=true;
        bool dec=true;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
                inc=false;
            if(nums[i]<nums[i+1])
                dec=false;
            if((!inc && !dec)==true)
                return false;
        } 
        return true; 
    }
};