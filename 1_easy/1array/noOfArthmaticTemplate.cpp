class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int i , j , k , cnt =0;
        for( i = 0;i<nums.size();i++){
               j = i + 1;
              
               k = nums.size() -1 ;
               while(j < k && k >= 0){
                int val = nums[j]-nums[i];
                int ans = nums[k]-nums[j];

                if(val==diff && ans==diff){
                    cnt++;
                    j++;
                    k--;
                }else if(val<diff){
                    j++;
                }else{
                    k--;
                }
               }
        }
        return cnt;
    }
};