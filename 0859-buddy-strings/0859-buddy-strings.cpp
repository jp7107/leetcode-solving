class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()) return false;

        // Case 2 : Strings already equal
        if(s == goal){
            vector<int> freq(26,0);
            for(char c : s){
                if(++freq[c-'a'] > 1) return true;
            }
            return false;
        }

        // Case 1 : Strings differ, check exactly two mismatches
        vector<int> diff;
        for(int i=0; i<s.size(); i++){
            if(s[i] != goal[i]) diff.push_back(i);
        }

        // Must be exactly two indices and swapping should match
        return diff.size()==2 && s[diff[0]] == goal[diff[1]] && s[diff[1]] == goal[diff[0]];
    }
};