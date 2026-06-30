class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];

        for (string s : strs){

            while (s.find(prefix) != 0){
                prefix.pop_back();
                if (prefix.empty()) return "";
               // prefix = prefix.substr(0, prefix.length() - 1);
            }
        }
        return prefix;
    }
};