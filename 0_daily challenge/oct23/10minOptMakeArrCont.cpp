class Solution {
public:
    int minOperations(vector<int>& A) 
    {
         int N = A.size(), i = 0, j = 0, ans = 0;
        sort(begin(A), end(A));
        A.erase(unique(begin(A), end(A)), end(A)); // only keep unique elements
        for (int M = A.size(); j < M; ++j) {
            while (A[i] + N <= A[j]) ++i; // let `i` point to the first element that is in range -- `A[i] + N > A[j]`
            ans = max(ans, j - i + 1);
        }
        return N - ans;
    }
};