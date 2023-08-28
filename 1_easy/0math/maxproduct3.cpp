class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxp=INT_MIN;
        int pre=nums[0];
        for(int i=1;i<n-1;i++){
            maxp=max(maxp,pre*nums[i]*nums[n-1]);
            pre=nums[i];
        }
        return maxp;
    }
};