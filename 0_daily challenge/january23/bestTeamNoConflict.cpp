class Solution {
public:
    vector<pair<int,int>>vec;
    vector<vector<int>>dp;
    int solve(int prev,int curr)
    {
        if(curr>=vec.size())
        {
            return 0;
        }
        auto &res=dp[prev+1][curr];
        if(res!=-1)
        {
            return res;
        }
        if(prev==-1 or vec[curr].second>=vec[prev].second)
        {
            int first=vec[curr].second+solve(curr,curr+1);
            int second=solve(prev,curr+1);
            return res=max(first,second);
        }
        return res=solve(prev,curr+1);
    }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        for(int i=0;i<scores.size();i++)
        {
            vec.push_back({ages[i],scores[i]});
        }
        int n=vec.size();
        dp.resize(n+1,vector<int>(n+1,-1));
        sort(vec.begin(),vec.end());
        return solve(-1,0);
    }
};