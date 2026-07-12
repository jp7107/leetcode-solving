class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         vector<int> v;
        for(int x:nums){
        if(x!=0) v.push_back(x);
        }
        for(int x:nums){
        if(x==0) v.push_back(x);
        }
        nums=v;
    }
};
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j = 0;  // position for next non-zero
        
//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] != 0) {
//                 swap(nums[i], nums[j]);
//                 j++;
//             }
//         }
//     }
// };