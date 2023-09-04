class Solution {
public:
    int tribonacci(int n) {
        if(n == 0){
            return 0;
        }if(n == 1 || n == 2){
            return 1;
        }
        int tib[n+1];
        tib[0] = 0;
        tib[1] = 1;
        tib[2] = 1;
        for(int i = 3 ; i <= n ; i++){
            tib[i] = tib[i-1] + tib[i-2] + tib[i-3];
        }
        return tib[n];
    }
};