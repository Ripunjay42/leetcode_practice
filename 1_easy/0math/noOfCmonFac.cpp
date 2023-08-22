class Solution {
public:
    int commonFactors(int a, int b)
    {
        int count=0;
        int x=max(a,b);
        for(int i=1;i<=x;i++)
        {
            if(a%i==0 && b%i==0)
            {
                count++;
            }
        }
        return count;    
    }
};