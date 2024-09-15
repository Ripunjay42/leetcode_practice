class Solution {
private:
    vector<string> mRes;
public:
    vector<string> generateParenthesis(int n) 
    {
        helper(n, 0, 0, "");
        return mRes;
    }
     
    void helper(int n, int open, int close, string s) {
        if (open == n && close == n) mRes.push_back(s);
        
        if (open < n) helper(n, open + 1, close, s + "(");
        
        if (close < open) helper(n, open, close+1, s + ")");
    }

};