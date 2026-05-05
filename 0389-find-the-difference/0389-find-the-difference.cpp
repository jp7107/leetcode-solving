class Solution {
public:
//     char findTheDifference(string s, string t) {
//         int n = s.length();
//         // vector<char> cc;
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         for(int i=0; i<s.size(); i++){
//             if(s[i] != t[i]){
//                 return t[i];
//             }
//         }
        
//         return t[n];
//     }
char findTheDifference(string s, string t) {
    vector<int> freq(26, 0);

    // Count characters in s
    for (char c : s) {
        freq[c - 'a']++;
    }

    // Subtract using t
    for (char c : t) {
        freq[c - 'a']--;
    }

    // Find the extra character
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return i + 'a';
        }
    }

    return '#'; // fallback (should not happen)
}
};