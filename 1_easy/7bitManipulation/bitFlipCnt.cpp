class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int count=0;
        int ans=start^goal;
        int cnt=0;
        while(ans)
        {
            cnt += ans & 1;
            ans >>= 1;
        }
        return cnt;
    }
};