class Solution 
{
public:
    int countSetBits(int n)
    {
        int count = 0;
        while (n) 
        {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int a=countSetBits(i);
            if(a==k)
            {
                sum+=nums[i];
            }
                
        }
        return sum;
    }
};