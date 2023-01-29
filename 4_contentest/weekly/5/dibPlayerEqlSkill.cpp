class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n=skill.size();
        long long ans=0;
        long long key=skill[0]+skill[n-1];
        for(int i=0;i<n/2;i++)
        {
            long long l=skill[i];
            long long r=skill[n-1-i];
            if(l+r!=key)
                return -1;
            ans=ans+l*r;
        }
        return ans;
    }
};