#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        dfs(s, 0, 0, "", res);
        return res;
    }

    void dfs(string s, int index, int parts, string current, vector<string>& res) {
        // If 4 parts formed and string used
        if (parts == 4 && index == s.size()) {
            res.push_back(current.substr(0, current.size() - 1)); // remove last dot
            return;
        }

        // If invalid state
        if (parts > 4) return;

        // Try segment lengths 1 to 3
        for (int len = 1; len <= 3 && index + len <= s.size(); len++) {
            string segment = s.substr(index, len);

            // Skip invalid segments
            if ((segment[0] == '0' && len > 1) || stoi(segment) > 255)
                continue;

            dfs(s, index + len, parts + 1, current + segment + ".", res);
        }
    }
};