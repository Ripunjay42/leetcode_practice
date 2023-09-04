class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string> &ws) {
        sort(ws.begin(), ws.end(), [&](const string &a, const string &b) { return a.length() < b.length(); });

        vector<string> result;
        unordered_set<string_view> was;

        for (const auto &w: ws) {
            const int n = w.length();
            vector<bool> reached(n, false);
            const auto start = w.c_str();

            for (int i = 0; i < n; ++i) {
                for (int j = 0; j <= i; ++j) {
                    if (j > 0 && !reached[j - 1]) continue;

                    const auto &substr = string_view(start + j, i - j + 1);
                    if (was.find(substr) != was.end()) {
                        reached[i] = true;
                        break;
                    }
                }
            }

            if (reached[n - 1]) {
                result.push_back(w);
            }

            was.insert(w);
        }

        return result;
    }
};