class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int prefixSum = 0;
        
        // Frequency array to store occurrences of remainders (0 to k-1)
        // remainder[0] is initialized to 1 because a sum divisible by k 
        // from the start is valid on its own.
        vector<int> remainderFreq(k, 0);
        remainderFreq[0] = 1;

        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];
            
            // Calculate remainder and handle negative results in C++
            int rem = prefixSum % k;
            if (rem < 0) rem += k; 
            
            // If we have seen this remainder before, it means there are 
            // 'remainderFreq[rem]' subarrays ending here that are divisible by k.
            count += remainderFreq[rem];
            
            // Increment the count of this remainder for future subarrays
            remainderFreq[rem]++;
        }

        return count;
    }
};