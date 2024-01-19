class Solution {
public:
    bool hasAlternatingBits(int n) {
        int cnt = n % 2;
        n /= 2;
        while(n){
            if(cnt == n % 2){
                return false;
            }
            cnt = n % 2;
            n /= 2;
        }
        return true;
    }
};