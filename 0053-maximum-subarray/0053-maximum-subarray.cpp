class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;

        for(auto val: nums){
            currSum = currSum + val;
            maxSum = max(currSum , maxSum);

        if(currSum < 0){
            //value of currsum is taken always  positive
                currSum = 0;
            }
        }
        return maxSum ;
    }
};