class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int st = 0, ed = nums.size() - 1;

        while (st <= ed) {
            int mid = st + (ed - st) / 2;

            if (nums[mid] == target)
                return true;

            // duplicate handling
            if (nums[st] == nums[mid] && nums[mid] == nums[ed]) {
                st++;
                ed--;
            }

            // left half sorted
            else if (nums[st] <= nums[mid]) {
                if (nums[st] <= target && target < nums[mid])
                    ed = mid - 1;
                else
                    st = mid + 1;
            }

            // right half sorted
            else {
                if (nums[mid] < target && target <= nums[ed])
                    st = mid + 1;
                else
                    ed = mid - 1;
            }
        }

        return false;
    }
};