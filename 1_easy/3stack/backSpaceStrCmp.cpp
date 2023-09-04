class Solution {
public:
    string help (string s  ) { 
        stack<char> st ; 
        for( int i = 0;  i < s.size( ) ; i ++ ) {
            if ( s [ i ] == '#') { 
                if ( !st.empty()) st.pop();
            }
            else st.push(s[i]) ; 
        }
        string ans = ""; 
        while ( !st.empty()){
            ans+=st.top();
            st.pop() ; 
        }
        return ans ; 
    }
    bool backspaceCompare(string s, string t) {
        return help(s) == help(t) ;
    }
};