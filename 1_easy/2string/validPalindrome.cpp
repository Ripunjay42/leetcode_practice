class Solution {
public:
    bool isPalindrome(string s) 
    {
        vector<char>v;
        int n=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                v.push_back(s[i]);
            }
        }
        transform(v.begin(), v.end(), v.begin(), ::tolower);
        int start=0;
        int end=v.size()-1;
        while(start<=end)
        {
            if(v[start]!=v[end])
            {
                 return false;
            } 
            else
                start++;
                end--;
        }
        return true;
    }
};