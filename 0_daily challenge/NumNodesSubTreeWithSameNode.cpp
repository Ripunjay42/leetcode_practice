class Solution {
public:
    vector<vector<int>> g;
    int dp[100001][26];

    void dfs(int v, int prev, string& labels) {
        for (auto &it : g[v]) {
            if (it != prev) {
                dfs(it, v, labels);
                for (int i = 0; i < 26; i++) {
                    dp[v][i] += dp[it][i];
                }
            }
        }
    }

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        g.resize(n);

        for (auto &it : edges) {
            g[it[0]].push_back(it[1]);
            g[it[1]].push_back(it[0]);
        }

        for (int i = 0; i < n; ++i) {
            dp[i][labels[i] - 'a'] = 1;
        }

        dfs(0, -1, labels);

        vector<int> ans(n);
        for (int i = 0; i < n; ++i) {
            ans[i] = dp[i][labels[i] - 'a'];
        }

        return ans;
    }
};