class Solution {
public:
    int minimumRounds(vector<int>& tasks) 
    {
        unordered_map<int,int> mp;
        for(auto i:tasks)
        {
            mp[i]++;
        }
        int output=0;
        for (auto i : mp){
            if(i.second==1)
                return -1;
            if(i.second%3==0){
                output += i.second/3;
            }
            else{
                output += i.second/3 + 1;
            }
        }
        return output;
    }
};