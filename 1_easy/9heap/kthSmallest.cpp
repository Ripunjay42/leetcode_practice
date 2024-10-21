
class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &nums, int k) 
    {
        priority_queue<int> pq;
        for(auto&it:nums)
        {
            pq.push(it);
            if(pq.size() > k)
                pq.pop();
        }

        return pq.top();
    }
};