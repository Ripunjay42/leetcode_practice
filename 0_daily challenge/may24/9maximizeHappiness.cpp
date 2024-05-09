class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) 
    {
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long int res=0;
        int i=0;
        while(k--)
        {
            happiness[i]=max(happiness[i]-i, 0);
            res+=happiness[i];
            i++;
        } 
        return res;  
    }
};