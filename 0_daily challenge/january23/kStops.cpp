class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
      queue<pair<int,pair<int,int>>> q; //{stops{nodereached,cost};
      vector<pair<int,int>> adjLs[n];
      vector<int> dis(n,1e9);
      dis[src] = 0;
      //Creating the adjacency list 
      for(auto it : flights){
          adjLs[it[0]].push_back({it[1],it[2]});
      }
      q.push({0,{src,0}});//Starting from source
      
      while(!q.empty()){
          auto it1 = q.front();
          q.pop();
          int stops = it1.first;
          int node = it1.second.first;
          int cost = it1.second.second;
          if(stops >k ) continue;
          for(auto it2 : adjLs[node] ){
              int nnode = it2.first;
              int ncost = it2.second;
              if(stops<=k && ncost+cost < dis[nnode]){
                  dis[nnode] = ncost+cost;
                  q.push({stops+1,{nnode,ncost+cost}});
              }
              
          }
      }
      if(dis[dst]==1e9) return {-1};
      return dis[dst];
    }
};