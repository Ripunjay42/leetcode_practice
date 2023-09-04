class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<int> dist(n, -1);
        int p = node1, cnt = 0;
        while (p != -1 && dist[p] == -1)
        {
            dist[p] = cnt;
            p = edges[p];
            cnt ++;
        }

        cnt = 0;
        p = node2;
        int min_dist = INT_MAX, min_node = -1;
        while (p != -1 && dist[p] != -2)
        {
            if (dist[p] >= 0)
            {
                int d = std::max(dist[p], cnt);
                if (d < min_dist || (d == min_dist && p < min_node))
                {
                    min_dist = d;
                    min_node = p;
                }
            }
            dist[p] = -2;
            p = edges[p];
            cnt ++;
        }

        return min_node;
        
    }
};

//must revise
