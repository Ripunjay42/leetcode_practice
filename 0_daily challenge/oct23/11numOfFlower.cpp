class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& persons) 
    {
         map<int,int>m;
        for(auto it:flowers){
            m[it[0]]++;
            m[it[1]+1]--;
        }
        int sum=0;
        for(auto &it:m){
            sum+=it.second;
            it.second=sum;
        }
        int n=persons.size();
        vector<int>res(n,0);
        for(int i=0;i<n;i++){
            auto it=m.upper_bound(persons[i]);
            if(it!=m.begin()){
                it--;
                res[i]=it->second;
            }
        }
        return res;    
    }
};