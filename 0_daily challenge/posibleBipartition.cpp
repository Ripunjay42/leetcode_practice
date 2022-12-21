class Solution {
    // standard dfs
     bool dfs( vector<vector<int>> &adj,vector<int> &color,int node)
    {
        if(color[node]==-1)
            color[node]=1;
        
        for(auto i:adj[node])
        {
            if(color[i]==-1)
            { 
                color[i]=1-color[node]; // color the i with different color than node
                // call dfs
                if(!dfs(adj,color,i))
                   return 0;
            }
            else if(color[i]==color[node])  // color of two adjacent elements are same
                return 0;                   
        }
        return 1;
    }
    
public:
   bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        vector<vector<int>> adj(n+1);  // adj list
        vector<int> color(n+1,-1);     // color array ****        
        
        // making the adjacency list for undirected graph
        for(auto i:dislikes)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);            
        }
        
        for(int i=1;i<=n;i++)
        {
            if(color[i]==-1)
                if(!dfs(adj,color,i))
                   return 0;
        }
        return true;
    }       
};