class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> res;
        unordered_map<int, int> m;
        int t=0;
        int p=0;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto x : m)
        {
            if(x.second==2)
            {
                p=x.first;
            }            
        }
        for(int i=1;i<=nums.size();++i)
           {
               auto x=m.find(i);
               if(x==m.end())
               {
                   t=i;
               }
           }
        res.push_back(p);
        res.push_back(t);
        
        return res;
    }
};