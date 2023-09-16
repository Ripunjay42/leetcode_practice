class Solution {
public:
    int minimumRightShifts(vector<int>& nums) 
    {
        int n=nums.size();
        if(is_sorted(nums.begin(),nums.end()))
        {
            return 0;
        }
        int cnt=0;
        vector<int> c=nums;
        sort(c.begin(),c.end());
        for(int i=0;i<n;i++)
        {
            int j;
            int first=c[0];
            for(j=1;j<n;j++)
            {
                c[j-1]=c[j];
            }
            c[n-1]=first;
            cnt++;
            if(nums==c)
            {
                return cnt;
            }
        }
        return -1;
    }
};