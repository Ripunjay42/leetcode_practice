#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    int check(vector<int>& piles, int mid) 
    {
        int ans = 0;
        for (int i = 0; i < piles.size(); i++) 
        {
            ans += ceil(double(piles[i]) / double(mid));
        }
        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int mid = (low+(high-low)/2);
            int reqtime=check(piles, mid); 
            if(reqtime<=h) 
            {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

int main() {
    Solution solution;
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    int result = solution.minEatingSpeed(piles, h);
    cout << "Minimum eating speed: " << result << endl;
    return 0;
}