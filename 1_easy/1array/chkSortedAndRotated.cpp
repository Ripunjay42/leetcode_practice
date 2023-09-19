class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int n=nums.size();
        if(is_sorted(nums.begin(),nums.end()))
            return true;
        vector<int> cpy=nums;
        sort(cpy.begin(),cpy.end());
        for(int i=0;i<n;i++)
        {
            int one=cpy[0];
            for(int j=1;j<n;j++)
            {
                cpy[j-1]=cpy[j];
            }
            cpy[n-1]=one;
            if(nums==cpy)
                return true;
        }
        return false;
    }
};