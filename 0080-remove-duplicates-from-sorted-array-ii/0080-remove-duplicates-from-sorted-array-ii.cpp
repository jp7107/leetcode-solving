class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2) return n;

        int j = 2; // next position to fill

        for(int i = 2; i < n; i++){
            // Allow placing nums[i] only if it is NOT equal to nums[j-2]
            if(nums[i] != nums[j - 2]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};