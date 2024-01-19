class Solution 
{
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        set <int> s(nums.begin(), nums.end());
        for(int i=1;;i++)
        {
            if(!s.count(i))
                return i;
        }
    return 0;
    }
};