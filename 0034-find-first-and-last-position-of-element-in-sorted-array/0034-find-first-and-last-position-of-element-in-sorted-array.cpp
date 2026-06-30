class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1, last = -1;

        int st = 0, ed = n - 1;

        // Find first occurrence
        while (st <= ed) {
            int mid = st + (ed - st) / 2;

            if (nums[mid] == target) {
                first = mid;
                ed = mid - 1; 
            }
            else if (nums[mid] < target) {
                st = mid + 1;
            }
            else {
                ed = mid - 1;
            }
        }

        st = 0, ed = n - 1;

        // Find last occurrence
        while (st <= ed) {
            int mid = st + (ed - st) / 2;

            if (nums[mid] == target) {
                last = mid;
                st = mid + 1;
            }
            else if (nums[mid] < target) {
                st = mid + 1;
            }
            else {
                ed = mid - 1;
            }
        }

        return {first, last};
    }
};