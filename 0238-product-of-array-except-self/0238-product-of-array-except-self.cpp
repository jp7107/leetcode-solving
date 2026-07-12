class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n);

        // Step 1: Calculate prefix products
        // ans[i] = product of all elements
        ans[0] = 1; 
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1]; 
            // prefix (ans):[1,1,2,6]
        }

        // Step 2: Calculate suffix products on the fly
        // suffix = product of elements 
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] = ans[i] * suffix; // here ans[i] is prefix (imp)
            //ans[3]=6*1=6
            //ans[2]=2*4=8
            //ans[1]=1*12=12
            //ans[0]=1*24=24
            suffix = suffix * nums[i];
        }

        return ans;//------getting ans= prefix * suffix
    }
};