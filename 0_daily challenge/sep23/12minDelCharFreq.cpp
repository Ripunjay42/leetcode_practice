class Solution {
public:
    int minDeletions(string s) 
    {
        unordered_map<char, int> chars;
        for (auto c : s)
        {
            chars[c]++;
        }

        unordered_set<int> freqSet;
        int count = 0;

        for (const auto& pair : chars) 
        {
            int freq = pair.second;
            while (freq > 0 && freqSet.count(freq))
             {
                freq--;
                count++;
            }
            freqSet.insert(freq);
        }

        return count;        
    }
};