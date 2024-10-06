class Solution {
public:
    int slidingWindow(string &s, int k, char &ch)
    {
        int n = s.size(); 
        int mx = 0; 
        int l = 0; 
        for(int r=0;r<n;r++)
        {
            if(s[r] != ch)
            {
                k--;    
            } 
            while(k < 0)
            {
                if(s[l]!=ch)
                {
                    k++;
                }
                l++;
            } 
            mx = max(mx, r - l+1); 
        }
        return mx; 
    }
    
    int characterReplacement(string s, int k) 
    {
        int ans = 0; 
        for(char ch = 'A'; ch <= 'Z'; ch++)
        {
            int mx = slidingWindow(s, k, ch);
            ans = max(ans, mx); 
        }
        return ans; 
    }
};