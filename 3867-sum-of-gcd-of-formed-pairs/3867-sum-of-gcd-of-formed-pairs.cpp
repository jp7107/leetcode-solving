class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;

        int mx = 0;

        // Construct prefixGcd
        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            prefixGcd.push_back(gcd(mx, nums[i]));
        }

        // Sort prefixGcd
        sort(prefixGcd.begin(), prefixGcd.end());

        // Sum GCDs of smallest-largest pairs
        long long sum = 0;
        int i = 0, j = prefixGcd.size() - 1;

        while (i < j) {
            sum += gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }

        return sum;
    }
};