class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {

        int n = nums.size();

        vector<int> pref(2 * limit + 2, 0);

        for(int i = 0; i < n / 2; i++) {

            int a = nums[i];
            int b = nums[n - 1 - i];

            int low = min(a, b) + 1;
            int high = max(a, b) + limit;
            int sum = a + b;

            // initially 2 moves
            pref[2] += 2;

            // make 1 move in range [low, high]
            pref[low] -= 1;
            pref[high + 1] += 1;

            // make 0 move at exact sum
            pref[sum] -= 1;
            pref[sum + 1] += 1;
        }

        int ans = INT_MAX;

        int curr = 0;

        // prefix sum
        for(int s = 2; s <= 2 * limit; s++) {

            curr += pref[s];

            ans = min(ans, curr);
        }

        return ans;
    }
};