class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k = 0;
    
        for(int i=0;i<s.size() , i<t.size();i++){
            if(t[i] == s[k])
                k++;
        }
        if(k==s.size())
            return true;
        return false;
    }
};