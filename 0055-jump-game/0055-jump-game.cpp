class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;
        int k;
        int farthest=0;
        int n=nums.size();
        while(i<n){
            if(i > farthest) {
                return false;
            }
            k=nums[i];
            for(int j=1; j<=k; j++){
                if(i + j < n) {
                farthest = max(i+j,farthest);
                }
            }
        if(farthest >= n-1){
            return true;
        }
         i++;

        }
        return true;
    }
};