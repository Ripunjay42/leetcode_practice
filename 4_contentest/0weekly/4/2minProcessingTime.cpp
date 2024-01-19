class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) 
    
    {
            sort(processorTime.begin(),processorTime.end());
            sort(tasks.begin(),tasks.end());
            int m=processorTime.size();
            int n=tasks.size();
            int ans=0;
            for(int i=0;i<m;i++)
            {
                int j=n-(4*i)-1;
                int cnt=0;
                while(cnt!=4)
                {
                    ans=max(ans,processorTime[i]+tasks[j]);
                    cnt++;
                    j--;
                }
            }
        return ans;
    }
};