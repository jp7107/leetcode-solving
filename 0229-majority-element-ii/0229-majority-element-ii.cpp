class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int candidate1 = 0, candidate2 = 0;

        for (int num : nums) {
            if (num == candidate1) {
                count1++;
            } 
            else if (num == candidate2) {
                count2++;
            } 
            else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            } 
            else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            } 
            else {
                count1--;
                count2--;
            }
        }

        count1 = count2 = 0;

        for (int num : nums) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
        }

        vector<int> ans;

        if (count1 > nums.size()/3) ans.push_back(candidate1);
        if (count2 > nums.size()/3) ans.push_back(candidate2);

        return ans;
    }
};// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans;

//         for(int i = 0; i < n; i++) {
//             int cnt = 0;
//             for(int j = 0; j < n; j++) {
//                 if(nums[i] == nums[j]) {
//                     cnt++;
//                 }
//             }
//             if(cnt > n/3) {
//                 bool found = false;

//                 for(int k = 0; k < ans.size(); k++) {
//                     if(ans[k] == nums[i]) {
//                         found = true;
//                         break;
//                     }
//                 }

//                 if(!found) {
//                     ans.push_back(nums[i]);
//                 }
//             }
//         }



//         return ans;
//     }
// };