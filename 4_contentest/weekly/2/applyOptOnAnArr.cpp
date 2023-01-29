class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 0; i + 1 < nums.size(); i++) {
            if (nums[i] == nums[i+1]) {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        vector<int> ans;
        
        for (int x : nums) if (x) ans.push_back(x);
        while (ans.size() < nums.size()) ans.push_back(0);
        return ans;
    }
};