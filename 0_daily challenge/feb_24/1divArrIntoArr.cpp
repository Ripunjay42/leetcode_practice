class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) 
    {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i=0;i<n;i+=3)
        {
            if(i+2<n && nums[i+2]-nums[i]<=k)
            {
                res.push_back({nums[i], nums[i+1], nums[i+2]});
            }
            else
            {
                return vector<vector<int>>();
            }
        }
        return res;    
    }
};
