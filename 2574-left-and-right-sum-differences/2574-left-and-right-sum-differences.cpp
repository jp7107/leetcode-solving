class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum;
        vector<int> rightsum;
        vector<int> ans;
        int sum1=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            leftsum.push_back(sum1);
            sum1+=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            rightsum.push_back(sum);
            sum+=nums[i];
        }
        reverse(rightsum.begin(), rightsum.end());

        for(int i=0;i<nums.size();i++){
            int abss= abs(leftsum[i]-rightsum[i]);
            ans.push_back(abss);
        }
        return ans;
    }
};