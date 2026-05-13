class Solution {
public:
    int jump(vector<int>& nums) {
        int farthest = 0;
        int cnt=0;
        vector<int> vec;
        int n=nums.size();
        int jumps=0;
        int currentEnd=0;

        for(int i = 0; i < nums.size()-1; i++) {

            // if current index is unreachable
            // if(i > farthest) {
            //     return false;
            // }

            // update farthest reachable index
            farthest = max(farthest, i + nums[i]);

            if(i == currentEnd) {
                jumps++;
                currentEnd = farthest;
            }
        }
    
        return jumps;
    }
};