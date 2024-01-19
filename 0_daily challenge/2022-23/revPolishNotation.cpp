class Solution {
public:
    long long func(long long a, long long b, char c){
        if(c == '+') return a+b;
        if(c == '-') return a-b;
        if(c == '/') return a/b;
        return a*b;
    }
    int evalRPN(vector<string>& tokens) {
        stack<long long int> st;
        for(int i=0; i<tokens.size(); i++){
            // if its an integer value add it to the stack
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/" && tokens[i] != "*"){
                st.push(stoi(tokens[i]));
            }
            // else it is a operand which means you have to do the operation to the last two numbers
            else{
                long long int b = st.top(); st.pop();
                long long int a = st.top(); st.pop();
                st.push(func(a,b,tokens[i][0])); // after performing the operation the result will perform operations with next integers in line
            }
        }
        return st.top();
    }
};