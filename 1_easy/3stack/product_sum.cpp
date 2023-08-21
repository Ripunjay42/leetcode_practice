class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int sum=0;
        int p=1;
        int i;
        for(i=n;i>0;i=i/10)
        {
            int a=i%10;
            sum+=a;
            p=p*a;
        }
        return p-sum;    
    }
};