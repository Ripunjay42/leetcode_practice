class Solution {
public:
    int countSegments(string s) 
    {
        vector<string> v;
        string word;
        stringstream ss(s);
        while(ss>>word)
        {
          v.push_back(word);
        }

        return v.size();    
    }
};