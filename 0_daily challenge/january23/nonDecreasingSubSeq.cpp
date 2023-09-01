class Solution {
public:
    set<vector<int>>st;
    void solve(int i , vector<int>&nums, vector<int> &tmp){
        if(i == nums.size()){
            if(tmp.size() > 1)
                st.insert(tmp);
            return;
        }
        if(!tmp.size() || nums[i] >= tmp.back()){
            tmp.push_back(nums[i]);
            solve(i + 1, nums, tmp);
            tmp.pop_back();
        }
        solve(i + 1 , nums , tmp);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>tmp;
        solve(0 , nums, tmp);
        vector<vector<int>> ans;
        for(auto it : st)
            ans.push_back(it);
        return ans;
    }
};