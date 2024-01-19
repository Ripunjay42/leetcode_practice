class Solution {
public:
    void dfs(vector<int>graph[],int si,vector<bool>&vis){
        vis[si]=true;
        for(int i=0;i<graph[si].size();i++){
            if(!vis[graph[si][i]])dfs(graph,graph[si][i],vis);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       int n = rooms.size();
       vector<int>graph[n];
       for(int i=0;i<rooms.size();i++){
           for(int j=0;j<rooms[i].size();j++){
               if(rooms[i][j]!=i){
                 graph[i].push_back(rooms[i][j]);
               }
           }
       }
       vector<bool>vis(n,0);
       dfs(graph,0,vis);
       for(int i=0;i<n;i++){
           if(!vis[i])return false;
       }
       return true;
    }
};