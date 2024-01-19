class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // Take a vector of the same size as the temperatures
        vector<int> v(temperatures.size());
        // Using stack will be easier as it will help us keep the track of elements greater or less
        stack<int> st;

        for(int i=0;i<temperatures.size();i++){
            // Here the first time i = 0 so the stack is empty,
            // the inner loop will not work as stack is empty.
            // Now dry run it by iterating i = 1,2,3,4....
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int pos = st.top();
                v[pos] = i - pos;
                st.pop();
            }
            // Pushing the index of the array temperatures.
            st.push(i);
        }

        return v;
    }
};