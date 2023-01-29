class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
       int ans = 0;
        for (int i = 0; i<points.size(); ++i){
            map<double,int> check;
            for (int  j = i+1; j<points.size(); ++j){
                double slope;
                if (points[i][0] == points[j][0])
                    slope = DBL_MAX;
                else{
                    slope = (points[i][1] - points[j][1]) / ((double) (points[i][0] - points[j][0]));
                }
                check[slope]++;
                ans = max(ans, check[slope]);
            }
        }
        return ans+1; 
    }
};