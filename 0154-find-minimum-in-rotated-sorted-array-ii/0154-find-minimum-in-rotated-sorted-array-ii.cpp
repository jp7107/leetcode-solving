class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0, ed = nums.size() - 1;

        while (st < ed) {
            int mid = st + (ed - st) / 2;

            if (nums[mid] > nums[ed]) {
                st = mid + 1;
            }
            else if (nums[mid] < nums[ed]) {
                ed = mid;
            }
            else {
                ed--;
            }
        }

        return nums[st];
    }
};