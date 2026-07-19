class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0;

        int xorValue = start ^ goal;   // Different bits

        while (xorValue != 0) {
            ans = ans + (xorValue & 1);   // Add if last bit is 1
            xorValue = xorValue >> 1;     // Move to next bit
        }

        return ans;
    }
};