class Solution {
public:
    int count_of_bits(int n)
    { 
        int count=0;
        while(n)
        {
            count+=n&1;
            n=n>>1;
        }
        return count;
    }
    bool if_prime(int num)
    {
        if (num <=1)
        {
            return false;
        }
        int i =2;
        while (i <= (num/2))
        {
            if (num % i == 0)
            {
                return false;
            }
            i++;
        }
        return true;
    }
    int countPrimeSetBits(int L, int R) 
    {
        int res = 0;
        int count;
        for (int i = L; i <= R; i++)
        {
            count = count_of_bits(i);
            if (if_prime(count))
            {
                res +=1;
            }
        }
        return res;
    }
};