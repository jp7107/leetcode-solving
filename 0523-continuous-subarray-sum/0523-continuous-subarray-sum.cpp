class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = -1;   // remainder 0 seen before at index -1
        
        int prefix = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            prefix += nums[i];
            
            if (k != 0)
                prefix %= k;
            
            if (mp.count(prefix)) {
                if (i - mp[prefix] >= 2)
                    return true;
            } else {
                mp[prefix] = i;  // store first occurrence only
            }
        }
        
        return false;
    }
};