class Solution {
    map<int , set<int>>g;
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {

        vector<bool>v(n , false);
        for(auto it : edges){
            g[it[0]].insert(it[1]);
            g[it[1]].insert(it[0]);
        }
        bool f = false;
        dfs(v , s , d,f);
        return f;
    }
    void dfs(vector<bool>&v , int s , int d , bool & valid ){
        v[s] = true;
        if(s == d){
            valid = true;
            return ;
        }
        auto st = g[s];        
        for(auto i : st){
            if(!v[i]){
                dfs(v , i , d , valid);
            }
        }
    }
};