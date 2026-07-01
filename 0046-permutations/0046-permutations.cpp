class Solution {
public:

    void solve(vector<int>& nums, int index, vector<vector<int>>& ans) {
        // BASE CASE
        if(index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        // TRY ALL POSSIBILITIES
        for(int i = index; i < nums.size(); i++) {

            swap(nums[index], nums[i]);   // fix element
            solve(nums, index + 1, ans);  // recurse
            swap(nums[index], nums[i]);   // backtrack
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;

        solve(nums, 0, ans);

        return ans;
    }
};