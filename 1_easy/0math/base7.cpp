class Solution {
public:
    string convertToBase7(int n) 
    {   
        int sum=0;
        int j=0;
        for(int i=n;i!=0;i=i/7)
        {
            int r=i%7;
            sum=sum+r*pow(10,j);
            j++;
            
        }
        string ans;
        ans=to_string(sum);
        return ans;
    }
};