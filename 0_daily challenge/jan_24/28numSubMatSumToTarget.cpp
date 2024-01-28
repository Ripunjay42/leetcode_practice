#define ll long long
class Solution {
public:
    int subarraySum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        unordered_map< int , int > mp;
        ll ans=0;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum==target)
            {
                ans++;
            }
            if(mp.find(sum-target)!=mp.end())
            {
                ans+=mp[sum-target];
            }   
            mp[sum]++;
        }
        return ans;
    }
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = 0;
        for(int i = 0; i < m ; i++){
            vector<int> v(n,0);
            for(int j = i ; j < m ; j++){
                //rows
                for(int k = 0;k<n ;k++){
                    v[k] += matrix[j][k];
                }
                ans += subarraySum(v,target);
            }
        }
        return ans;
    }
};