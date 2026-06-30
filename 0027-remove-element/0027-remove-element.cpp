class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // vector<int>newVec;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i] != val){
        //         newVec.push_back(nums[i]);
        //     }
        // }
        //   // copy back to nums
        // for (int i = 0; i < newVec.size(); i++) {
        //     nums[i] = newVec[i];
        // }
        // return newVec.size();
        int j = 0;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] != val) {
                    nums[j] = nums[i];
                    j++;
                }
            }
    return j;
    }
};