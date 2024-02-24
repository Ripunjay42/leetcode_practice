class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<vector<pair<int,int>>>adj(n);
        adj[0].push_back({firstPerson,0});
        adj[firstPerson].push_back({0,0});
        for(auto i:meetings)
        {
            adj[i[0]].push_back({i[1],i[2]});
            adj[i[1]].push_back({i[0],i[2]});
        }
        queue<pair<int,int>>q;
        q.push({0,0});
// time at which the node has recieved a Secret
        vector<int>SecretRecivedAtTime(n,INT_MAX);
        SecretRecivedAtTime[0]=0;
        while(!q.empty())
        {
            int u=q.front().first;
            int curTime=q.front().second;
            q.pop();
            for(auto node:adj[u])
            {
                int v=node.first;
                int t=node.second;
/* check if visiting time is greater than or equal to current time also
check if v has received the Secret before the visiting time if has then no need to push it inside the queue */
                if(curTime<=t && t<SecretRecivedAtTime[v] )
                {
                    q.push({v,t});
                    SecretRecivedAtTime[v]=t;
                }
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(SecretRecivedAtTime[i]!=INT_MAX)ans.push_back(i);
        }
        return ans;
    }
};