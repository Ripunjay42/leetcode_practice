class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        map<char,char>m,m1;
        for(int i=0;i<n;i++){
            if(m.find(s[i])!=m.end()){
                if(m[s[i]]!=t[i]){
                    return 0;
                }
            }
              if(m1.find(t[i])!=m1.end()){
                if(m1[t[i]]!=s[i]){
                    return 0;
                }
            }
            m[s[i]]=t[i];
            m1[t[i]]=s[i];
        }
        return 1;
    }
};