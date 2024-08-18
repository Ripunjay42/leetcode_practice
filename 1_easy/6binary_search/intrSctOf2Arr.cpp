class Solution {
public:
    int findElement(vector<int>&arr, int target){
        int lo = 0;
        int hi = arr.size()-1;
        while(lo<=hi){
             int mid = lo+(hi-lo)/2;
             if(arr[mid] == target) return arr[mid];
             else if(arr[mid]<target) lo = mid+1;
             else hi = mid-1;
        }
        return -1;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int>ans;
        int k = findElement(nums2,nums1[0]);
        if(k!=-1) ans.push_back(k);
        for(int i=1;i<nums1.size();i++){
            if(nums1[i]!=nums1[i-1]){
                 k = findElement(nums2, nums1[i]);
                if(k!=-1) ans.push_back(k);
            }
        }
        return ans;
    }
};