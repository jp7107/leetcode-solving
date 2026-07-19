class Solution {
public:

int minOperations(vector<vector<int>>& grid, int x) {
    vector<int> nums;

    // Step 1: Flatten
    for (auto &row : grid) {
        for (int val : row) {
            nums.push_back(val);
        }
    }

    // Step 2: Check feasibility
    int rem = nums[0] % x;
    for (int num : nums) {
        if (num % x != rem) return -1;
    }

    // Step 3: Find median
    int n = nums.size();
    nth_element(nums.begin(), nums.begin() + n/2, nums.end());
    int median = nums[n/2];

    // Step 4: Count operations
    long long ops = 0;
    for (int num : nums) {
        ops += abs(num - median) / x;
    }

    return ops;
}
};