class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp;
        vector<int> ans = {-1};   // default

        for (int i = 0; i < numbers.size(); i++) {
            int sum = target - numbers[i];

            if (mp.find(sum) != mp.end()) {
                ans = { i + 1, mp[sum] + 1 };
                // swap to maintain order (map index smaller first)
                swap(ans[0], ans[1]);
                return ans;
            }
            mp[numbers[i]] = i;
        }
        return ans;
    }
};