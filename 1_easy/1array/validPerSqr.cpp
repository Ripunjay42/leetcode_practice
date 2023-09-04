class Solution {
public:
    bool isPerfectSquare(int n) 
    {
        if(n==1) 
            return true;
        double val;
        for(int i=2;i<n;i++)
        {
            val=n*1.0/i;
            if(val==i)
                return true;
            if(i>val)
                break;
        }
        return false;
    }
};