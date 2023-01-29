class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0) return 0;
        // use dynamic programing
        vector<int> buy(n,0); // the best profit made if we buy today @i
        vector<int> sel(n,0); // the best profit made if we sell today @i
        vector<int> col(n,0); // the best profit made if we cooldown today @i
        for(int i=1; i<n; i++){
            // either cooldown yesterday @i-1 is the best OR 
            // buy yesterday @i-1 is not good enough so buy again today may even profit more.
            buy[i] = max(col[i-1], buy[i-1]);
            
            // either bought yesterday @i-1 and sell today @i is the best OR
            // sold yesterday @i-1 is not good enough so sell today @i may even profit more.
            sel[i] = max(buy[i-1] + (prices[i] - prices[i-1]), sel[i-1] + (prices[i] - prices[i-1]));
            
            // either sold yesterday @i-1 is the best OR
            // cooldown yesterday is the best.
            col[i] = max(sel[i-1], col[i-1]);
        }
        // return the most profit from the last day!
        return max(buy[n-1], max(sel[n-1], col[n-1]));
    }
};