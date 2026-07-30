class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        vector<int> lastIndex(128, 0);
        
        int j =0;
        for (int i = 0; i < n; i++) {
            char currentChar = s[i];
            j = max(j, lastIndex[currentChar]);
            maxLength = max(maxLength, i - j + 1);
            lastIndex[currentChar] = i + 1;
        }
        
        return maxLength;
    }
};