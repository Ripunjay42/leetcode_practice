#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int maxIceCream(vector<int>& A, int coins) 
    {
        sort(A.begin(), A.end());
        for (int i = 0; i < A.size(); ++i)
            if ((coins -= A[i]) < 0)
                return i;
        return A.size();
    }
};
int main()
{
    Solution a;
    vector<int> b={1,4,3,2,1};
    int n=7;
    cout<<a.maxIceCream(b,n);
}
