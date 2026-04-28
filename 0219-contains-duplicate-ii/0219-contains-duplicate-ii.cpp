// class Solution {
// public:
//    bool containsNearbyDuplicate(vector<int>& nums, int k) {
//     unordered_map<int, int> mp; // value → last index

//     for(int i = 0; i < nums.size(); i++) {
//         if(mp.find(nums[i]) != mp.end()) {
//             if(abs(i - mp[nums[i]]) <= k) {
//                 return true;
//             }
//         }
//         mp[nums[i]] = i; // update latest index
//     }

//     return false;
// }
// };
//sliding.  window---.>>>>>>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> seen;

        for (int i = 0; i < nums.size(); i++) {
            if (i > k) {
                seen.erase(nums[i - k - 1]);
            }

            if (seen.find(nums[i]) != seen.end()) {
                return true;
            }

            seen.insert(nums[i]);
        }

        return false;        
    }
};