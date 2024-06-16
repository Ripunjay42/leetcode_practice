class Solution {
public:
    int arrayPairSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int sum=0;
        for(int i=0; i<nums.size();i++)
        {   
            if(i%2==1)
            {
                continue;
            }
            sum+=nums[i];
        }
        return sum;    
    }
};