class Solution {
public:
    int subarrayLCM(vector<int>& a, int k) 
    {
        int n=a.size();
        int c=0;
        for(int i=0;i<n;i++){
            int cur=a[i];
            for(int j=i;j<n;j++){
                int g=gcd(cur,a[j]);
                cur=cur*a[j]/g;
                if(cur==k){
                    c++;
                }
                else if(cur>k){
                    break;
                }
            }
        }
        return c;
    }
};