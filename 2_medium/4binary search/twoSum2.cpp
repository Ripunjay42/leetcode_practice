class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        int sum;
        vector<int>v;
        while(i<=j){
            sum=numbers[i]+numbers[j];
            if(sum==target){
            v.push_back(i+1);
            v.push_back(j+1);
            break;
            }
            else if(sum>target)
            j--;
            else
            i++;

        }
        return v;
    }
};