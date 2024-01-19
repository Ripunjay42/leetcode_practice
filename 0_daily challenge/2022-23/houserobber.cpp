class Solution {
public:
    int rob(vector<int>&num) 
    {
        int n=num.size();
        int a = 0;
        int b = 0;
        for (int i=0; i<n; i++)
        {
            if (i%2==0)
            {
                a = max(a+num[i], b);
            }
            else
            {
                b = max(a, b+num[i]);
            }
        }
        return max(a, b);
    }
};