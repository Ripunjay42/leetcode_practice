#define mod 1000000007
class Solution {
public:
    int countGoodNumbers(long long n) 
    {
        long long oddPlaces = n/2;
        long long evenPlaces = n/2 + n%2;
        return (power(5, evenPlaces) * power(4, oddPlaces))%mod;
    }

    long long power(long long x, long long n){
        if(n == 0)
        {
            return 1;
        }
        long long y = power(x, n/2);
        y =y*y;
        y =y  % mod;
        if(n%2==1){
            y =y* x;
            y=y% mod;
        }
        return y;
    }  

};