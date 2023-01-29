class Solution {
public:
    int appendCharacters(string s, string t) {
        int k = 0; 
        for (auto& ch : s) {
            if (k < t.size() && ch == t[k]) ++k; 
        }
        return t.size()-k; 
    }
};