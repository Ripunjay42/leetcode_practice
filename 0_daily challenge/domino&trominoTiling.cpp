class Solution {
public:
    int numTilings(int n) {
        int mo = 1e9 + 7;
        vector<long long int>arr(1001,0);
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 5;
        if(n <= 3)return arr[n];
        for(int i = 4;i <= n;i++){
            arr[i] = arr[i-1]*2 + arr[i-3];
            arr[i] %= mo;
        }
        return arr[n];
    }
    
};