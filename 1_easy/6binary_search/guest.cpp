class Solution {
public:
    int guessNumber(int n) {
        int left{1}, right{n};

        while (left<=right) {
            int middle = left+(right-left)/2;
            int soln = guess(middle);
            if (!soln) return middle;
            if (soln<0) {
                right = middle-1;
            } else {
                left = middle+1;
            }
        }

        return -1;
    }
};