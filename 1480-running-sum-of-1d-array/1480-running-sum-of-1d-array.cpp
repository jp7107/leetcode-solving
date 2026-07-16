class Solution {

public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
                int prefix = 0;
            for(int j=0;j<=i;j++){
                prefix += nums[j];
                // int sum =prefix+nums[j];
                
            }
                ans.push_back(prefix);
        }
        return ans;
    }
}; 
