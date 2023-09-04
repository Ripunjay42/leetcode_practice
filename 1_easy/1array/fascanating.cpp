class Solution {
public:
    bool isFascinating(int n) {

        int n2 = 2*n;
        int n3 = 3*n;

        string s = to_string(n);
        string s2 = to_string(n2);
        string s3 = to_string(n3);

        string ans = s+s2+s3;
        sort(ans.begin(), ans.end());
        for(int i=0; i<ans.length()-1;i++){
            if(ans[i] == '0' || ans[i] == ans[i+1]){
                return false;
            }
        }
        return true;          
    }
};