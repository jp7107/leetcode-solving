class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int a = nums[n-1];     // largest
        int b = nums[n-2];     // second largest
        int c = nums[0];       // smallest

        return a + b - c;
    }
};