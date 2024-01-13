class Solution {
public:
    int minSteps(string s, string t) 
    {
        vector<int> sv(26,0);
        vector<int> tv(26,0);
        for(auto ch:s)
        {
            sv[ch-'a']++;
        } 
        for (auto ch:t)
        {
            tv[ch-'a']++;
        }
        int ans =0;
        for(int i=0;i<26;i++)
        {
            if(sv[i]!=tv[i])
            {
                ans+=abs(sv[i]-tv[i]);
            }
        }
        return ans/2;   
    }
};