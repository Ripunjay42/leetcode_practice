class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector<int> res;
        for(int i=1;i<=9;i++)
        {
            int n=i;
            int next_n=i+1;
            while(n<=high && next_n<=9)
            {
                n=n*10+next_n;
                if(n>=low && n<=high)
                {
                    res.push_back(n);
                }
                next_n++;
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};