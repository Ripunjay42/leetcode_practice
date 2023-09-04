class Solution {
public:
    int selfdividing(int n)
    {
        int on=n;
        while(n>0)
        {
            int rem=n%10;
            if(rem==0)
                return 0;
            if(on%rem!=0)
                return 0;
            n=n/10;
        }
        return 1;
    }
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> ans;
        for(int i=left;i<=right;i++)
        {
            if(selfdividing(i))
            {
                ans.push_back(i);
            }
        }
        return ans;    
    }
};