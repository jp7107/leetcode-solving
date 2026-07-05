class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mapST[256] = {0};   // mapping s -> t
        int mapTS[256] = {0};   // mapping t -> s

        for(int i = 0; i < s.size(); i++) {
            char a = s[i];
            char b = t[i];

            // if already mapped but mismatch -> not isomorphic
            if(mapST[a] != 0 && mapST[a] != b) return false;
            if(mapTS[b] != 0 && mapTS[b] != a) return false;

            // create mapping if not already mapped
            mapST[a] = b;
            mapTS[b] = a;
        }
        return true;
    }
};