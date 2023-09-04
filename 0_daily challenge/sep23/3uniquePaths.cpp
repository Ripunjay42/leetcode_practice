class Solution {
public:
    int dp[101][101];
    int solve(int m,int n,int i,int j)
    {
        if(i==m-1||j==n-1){
            return 1;
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=solve(m,n,i+1,j)+solve(m,n,i,j+1);
    }
    int uniquePaths(int m, int n) 
    {
        memset(dp,-1,sizeof(dp));
        return solve(m,n,0,0);
    }
};