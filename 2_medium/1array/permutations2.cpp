class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> st;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        st.insert(nums);
        while(next_permutation(nums.begin(), nums.end()))
            st.insert(nums);
        for (vector<int> v : st)
            ans.push_back(v);
        return ans;
    }
};