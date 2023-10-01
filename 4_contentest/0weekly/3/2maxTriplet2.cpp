class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) 
    {
        
         int n = nums.size();
         if (n < 3) 
         {
           return 0;
         }
          if (n == 3) 
          {
            long long temp = (long long)(nums[0] - nums[1])* nums[2];
            return max(0LL, temp);
          }
          long long preMax[n]; 
          preMax[0] = nums[0];
          for (int i = 1; i < n; i++) 
          {
                preMax[i] = max(preMax[i - 1], (long long)nums[i]);
          }
          long long sufMax[n]; 
          sufMax[n - 1] = nums[n - 1];
          for (int i = n - 2; i >= 0; i--) 
          {
              sufMax[i] = max(sufMax[i+1], (long long)nums[i]);
          }
          long long result = 0;
          for (int i = 1; i < n - 1; i++) 
          {
              sufMax[i + 1];
              long long temp = (preMax[i - 1] - (long long)nums[i]) * sufMax[i+1];
              result = max(result, temp);
         }
        return result;
    }
};