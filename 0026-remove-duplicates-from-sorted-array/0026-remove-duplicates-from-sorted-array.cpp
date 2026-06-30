// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if(nums.size() == 0) return 0;

//         int j = 1;
//         for(int i = 1; i < nums.size(); i++) {
//             if(nums[i] != nums[i - 1]) {
//                 nums[j] = nums[i];
//                 j++;
//             }
//         }
//         return j;
//     }
// };
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> temp;

        // Insert unique elements using hashing
        for(int x : nums) {
            if(s.find(x) == s.end()) {  
                s.insert(x);
                temp.push_back(x);
            }
        }

        // Copy back unique elements into nums
        for(int i = 0; i < temp.size(); i++) {
            nums[i] = temp[i];
        }

        return temp.size();  // number of unique elements
    }
};