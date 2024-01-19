class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size()-1, ans = INT_MAX;
        while(low<=high) {
            int mid = (low+high)/2;
            if(nums[low]<=nums[mid]) {
                ans = min(ans, nums[low]);
                low = mid+1;
            } else {
                ans = min(ans, nums[mid]);
                high = mid-1;
            }
        }
        return ans;
    }
};