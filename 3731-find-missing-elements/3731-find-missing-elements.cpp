// class Solution {
// public:
//     vector<int> findMissingElements(vector<int>& nums) {
//         vector<int>n;
//         sort(nums.begin(),nums.end());
        
//         int i=0,j=i+1;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]+1 !=nums[j]){
//                 n.push_back(j);
//                 return n;
            
//             }
//         }
//        return "";
        
//     }
// };
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> result;
        
        if (nums.size() < 2) return result; 

        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] + 1 != nums[i+1]) {
                for(int val = nums[i] + 1; val < nums[i+1]; val++) {
                    result.push_back(val);
                }
            }
        }
        
        return result;
    }
};