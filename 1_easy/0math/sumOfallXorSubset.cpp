class Solution {
public:
    int subsetXORSum(vector<int>& nums) 
    {
        int n = nums.size();
        int totalSubsets = 1<<n; 
        int sum = 0;
        for(int mask=0;mask<totalSubsets;mask++){
            int subXor = 0,x=1;
            for(int i=0;i<n;i++){
                if(mask & x) subXor ^= nums[i];
                x<<=1;
            }
            sum += subXor;
        }
        return sum;
    }
};