class Solution {
public:
    int scoreOfString(string s) 
    {
        int sum=0;
        for(int i=1;i<s.size();i++)
        {
            int a=(s[i]-'a')+97;
            int b=(s[i-1]-'a')+97;
            int c=abs(b-a);
            sum+=c;
        }
        return sum;  
    }
};