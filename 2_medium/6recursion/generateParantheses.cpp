class Solution {
public:
void solve(int n , int start , int close, string temp ,vector<string>&result)
{
    if(temp.size()==n*2)
    {
        result.push_back(temp);
        return ; 
    }
    if(start < n)
    {
        solve(n,start + 1, close,temp + "(", result);
    }
    if(close < start )
    {
        solve(n,start, close + 1,temp + ")", result);
    }
 }
vector<string> generateParenthesis(int n) 
{
    vector<string>result;
    solve(n,0, 0,"", result);
    return result;
}
};