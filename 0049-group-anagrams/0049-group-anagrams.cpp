class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for(string word : strs)
        {
            string temp = word;          // make a copy
            sort(temp.begin(), temp.end()); // create key

            mp[temp].push_back(word);    // store original word
        }

        vector<vector<string>> ans;

        for(auto &it : mp)
        {
            ans.push_back(it.second);
        }

        return ans;
    }
};