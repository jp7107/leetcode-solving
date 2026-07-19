class Solution {
public:
    string smallestSubsequence(string s) {

        int last[26] = {}, visited[26] = {}, n = s.size();
        string res = "";


        for (int i =0; i<n; i++){
            last[s[i] - 'a'] = i;
        }

        for (int i =0; i<n; i++){

            if (visited[s[i] - 'a']++) continue;

            while (!res.empty() && res.back() > s[i] && i < last[res.back() - 'a']){

                visited[res.back() - 'a'] = 0, res.pop_back();
            }
            res.push_back(s[i]);
        }
        
        return res;
    }
};