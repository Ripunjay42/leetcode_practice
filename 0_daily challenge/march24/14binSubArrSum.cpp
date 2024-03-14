class Solution {
 public:
  int numSubarraysWithSum(vector<int>& nums, int goal) 
  {
    int ans = 0, sum = 0;
    unordered_map<int, int> count{{0, 1}};
    for (const int num : nums) 
    {
        sum += num;
        ans += count[sum-goal];
        ++count[sum];
    }
    return ans;
  }
};