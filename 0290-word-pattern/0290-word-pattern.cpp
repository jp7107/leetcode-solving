class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string token;

        while (ss >> token) {
            words.push_back(token);
        }

        if (pattern.length() != words.size())
            return false;

        unordered_map<string, char> mp;
        unordered_set<char> used;

        for (int i = 0; i < pattern.length(); i++) {
            string word = words[i];
            char ch = pattern[i];

            if (mp.find(word) == mp.end()) {

                // character already mapped to another word
                if (used.count(ch))
                    return false;

                mp[word] = ch;
                used.insert(ch);
            }
            else {
                // existing mapping must match
                if (mp[word] != ch)
                    return false;
            }
        }

        return true;
    }
};