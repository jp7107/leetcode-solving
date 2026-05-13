class Solution {
public:

    bool possible(vector<int>& nums,
                  vector<long long>& prefix,
                  int mid,
                  int right,
                  int k) {

        long long target = nums[right];

        long long rangeSum;

        if(mid == 0)
            rangeSum = prefix[right];
        else
            rangeSum = prefix[right] - prefix[mid - 1];

        long long len = right - mid + 1;

        long long operations = target * len - rangeSum;

        return operations <= k;
    }

    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        vector<long long> prefix(n);

        prefix[0] = nums[0];

        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        int ans = 1;

        for(int right = 0; right < n; right++) {

            int low = 0;
            int high = right;

            int best = right;

            while(low <= high) {

                int mid = low + (high - low) / 2;

                if(possible(nums, prefix, mid, right, k)) {

                    best = mid;
                    high = mid - 1;

                } else {

                    low = mid + 1;
                }
            }

            ans = max(ans, right - best + 1);
        }

        return ans;
    }
};