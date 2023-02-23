class Solution {
public:
  int countBinarySubstrings(string s) {
    int curLen = 1, prevLen = 0, cnt = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) curLen++;
        else {
            prevLen = curLen;
            curLen = 1;
        }
        if (prevLen >= curLen) cnt++;
    }
    return cnt;    
}
};