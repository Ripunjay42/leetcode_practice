class Solution {
public:
    bool judgeSquareSum(int target) 
    {
        if (target <= 2)
            return true;
        for (int a = sqrt(target); a >= 1; a--) 
        {
            int remainder = target - a * a;
            int b = sqrt(remainder);
            if (b * b == remainder)
                return true;
        }
        return false;
    }
};