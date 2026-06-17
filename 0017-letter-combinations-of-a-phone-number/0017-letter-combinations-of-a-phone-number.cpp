class Solution {
public:
vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {};

    unordered_map<char, string> phone_map = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
        {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
    };

    vector<string> result = {""};

    for (char digit : digits) {
        vector<string> new_result;
        
        for (const string& combo : result) {
            for (char letter : phone_map[digit]) {
                new_result.push_back(combo + letter);
            }
        }
        result = new_result;
    }

    return result;
}
};