class Solution {
public:
    int check(vector<int>& piles, int mid) 
    {
        int ans = 0;
        for (int i = 0; i < piles.size(); i++) 
        {
            ans += ceil(double(piles[i]) / double(mid));
        }
        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int mid = (low+(high-low)/2);
            int reqtime=check(piles, mid); 
            if(reqtime<=h) 
            {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};