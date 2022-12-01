class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int n=s.length()-1;
        int c1=0, c2=0;
        for(int i=0;i<n/2+1;i++)
        {
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
                c1++;
            if(s[n-i]=='a'|| s[n-i]=='e' || s[n-i]=='i'|| s[n-i]=='o'|| s[n-i]=='u'|| s[n-i]=='A'|| s[n-i]=='E'|| s[n-i]=='I'|| s[n-i]=='O'|| s[n-i]=='U')
                c2++;
        }
        if(c1==c2)
            return true;
        else
            return false;
    }
};