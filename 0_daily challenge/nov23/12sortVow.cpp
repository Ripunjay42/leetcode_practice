class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char, int> hash;
        hash.insert({'A', 1});
        hash.insert({'E', 1});
        hash.insert({'I', 1});
        hash.insert({'O', 1});
        hash.insert({'U', 1});
        hash.insert({'a', 1});
        hash.insert({'e', 1});
        hash.insert({'i', 1});
        hash.insert({'o', 1});
        hash.insert({'u', 1});
        vector<int> idsave;
        vector<char> vowsave;
        for(int i=0; i<s.size(); i++) {
            if(hash.find(s[i])!=hash.end()) {
                idsave.push_back(i);
                vowsave.push_back(s[i]);
            }
        }
        sort(vowsave.begin(), vowsave.end());
        for(int i=0; i<idsave.size(); i++) {
            s[idsave[i]] = vowsave[i];
        }
        return s;
    }
};