
class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 0) return n;           // Every element qualifies if k = 0
        if (k >= n) return 0;           // No element can have k greater values

        sort(nums.begin(), nums.end());
        // int limit = nums[n - k - 1];    // Element must be <= this to have k greater

        int cnt = 0;
        for (int x : nums) {
            if (x < nums[n-k]) cnt++;   // strictly less than the k-th largest
        }

        return cnt;
    }
};

