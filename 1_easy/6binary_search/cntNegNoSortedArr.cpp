class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
         int ans=0;
         int n=grid.size();

         for(int i=0;i<n;i++)
         {
             int left=0,right=grid[i].size()-1,mid;
             int ct=0;
             while(left<=right){
                   mid=left+(right-left)/2;
                   if(grid[i][mid]<0){
                       ct=grid[i].size()-mid;
                       right=mid-1;
                   }else left= mid+1;
             }
             ans+=ct;
         }      
         return ans;
    }
};