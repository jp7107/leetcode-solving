class Solution {
public:
    int minimumFlips(int n) {
        // binary representation without leading zeros
        string s = bitset<64>(n).to_string();
        s = s.substr(s.find('1'));

        string rev = s;
        reverse(rev.begin(), rev.end());

        int flips = 0;
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] != rev[i]) {
                flips++;
            }
        }
        return flips;
    }
};