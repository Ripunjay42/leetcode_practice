class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& A) 
    {
      int n = A.size();
      if(n == 0)
          return {};
      sort(A.begin(), A.end());   
      vector<int> dp(n, 1);
      vector<int> previous_index(n, -1);
      int max_ind = 0; //this keeps track of the index at which the longest subset ends
        
      //4. logic :
      //      for j<i<n,
      //      if A[i]%A[j] = 0, then,
      //       we can add A[i] to subset having last element as A[j], if and only if,
      //       length of subset ending at A[j] after adding A[i] becomes more than length of subset of which A[i] is already a part
      //       in other words, if dp[i] < dp[j] + 1   => dp[i] = dp[j]+1  
      // also in the process we keep track of previous indices of i, and also the max_ind  
      
       for(int i=1; i<n; i++) {
           for(int j=0; j<i; j++) {
               if(A[i]%A[j]==0 and dp[i] < dp[j] + 1) 
               {
                   dp[i] = dp[j]+1;
                   previous_index[i] = j;
               }
           }
           if(dp[i] > dp[max_ind]) {
               max_ind = i;
           }
       }
        
      //5. Now we just use max_ind and previous_index to form the final subset  
        
      vector<int> answer;
      int t = max_ind;  
      while(t >= 0) {
          answer.push_back(A[t]);
          t = previous_index[t];
      }
       
      return answer;  
    }
};