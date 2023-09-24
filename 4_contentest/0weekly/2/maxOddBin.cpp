class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        int cnt=0;
        int n=s.length();
        for (int i=0;i<n;i++)
        {
            if(s[i]=='1')
                cnt++;
        }
        string s1="";
        if(cnt==1){
            {
                for(int i=0;i<n-1;i++)
                s1+='0';
            }
            s1+='1';
        }
        else
            {
                for (int i=0;i<cnt-1;i++)
                    s1+='1';
                for (int i=0;i<n-cnt;i++)
                    s1+='0';
                s1+='1';
            }
        return s1;
        
    }
};