class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n =nums.size();
        long long sum =0;
        long long F =0;
    // Step 1: Calculate sum and F(0)
        for(int i=0;i <nums.size(); i++){
            sum += nums[i];
            F += (long long )i * nums[i];
        }
    long long result = F;

    // Step 2: Use recurrence relation
        for (int k = 1; k < n; k++) {
        F = F + sum - (long long)n * nums[n - k];
        result = max(result, F);
    
        }
        return result;


    }
};