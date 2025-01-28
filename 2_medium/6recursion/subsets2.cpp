class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
         vector<vector<int>> ans;
         vector<int> ds;
         sort(nums.begin(), nums.end());
         fnd(0,  nums, ds, ans);
         return ans;
    }

    void fnd(int ind, vector<int> &nums, vector<int>& ds, vector<vector<int>>& ans)
    {
         ans.push_back(ds);
         for (int i = ind; i < nums.size(); i++) 
         {
            if (i != ind && nums[i] == nums[i - 1]) continue;
            ds.push_back(nums[i]);
            fnd(i + 1, nums, ds, ans);
            ds.pop_back();
         }
    }
};