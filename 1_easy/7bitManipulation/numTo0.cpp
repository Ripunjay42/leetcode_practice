class Solution {
public:
    int numberOfSteps(int num) {
        int ans = 0;
        while(num>0)
        {
            if(!(num&1))          //If num is Even
            {
                num = num>>1;     //Make it half
            }
            else{
                num--;            //Else reduce it by 1
            }
            ans++;
        }
        return ans;
    }
};