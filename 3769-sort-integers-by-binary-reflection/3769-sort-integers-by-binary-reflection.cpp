class Solution {
public:
    int reflectBinary(int x) {
        int r = 0;
        while (x > 0) {
            r = (r << 1) | (x & 1); // add last bit
            x >>= 1;                 // shift right
        }
        return r;
    }

    vector<int> sortByReflection(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            int ra = reflectBinary(a);
            int rb = reflectBinary(b);

            if (ra == rb) return a < b; 
            return ra < rb;             // sort by reflected value
        });

        return nums;
    }
};