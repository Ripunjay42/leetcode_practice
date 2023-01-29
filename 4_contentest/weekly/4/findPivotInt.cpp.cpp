class Solution {
public:
    int pivotInteger(int n) {
        int prefix = 0, suffix = n*(n+1)/2; 
        for (int x = 1; x <= n; ++x) {
            prefix += x; 
            if (prefix == suffix) return x; 
            suffix -= x; 
        }
        return -1; 
    }
};