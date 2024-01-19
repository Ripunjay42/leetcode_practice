class Solution {
public:
    int integerBreak(int n) {
        int result = 0;
        for (int k = 2; k <= n; k++) {
            int mi = n / k;
            int rest = n % k;
            int product = pow(mi + 1, rest) * pow(mi, k - rest);
            result = max(result, product);
        }
        return result;
    }
};