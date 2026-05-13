class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int par =0;
        for(int i=0; i<nums.size()-1; i++){
            if((nums[i]%2==0 && nums[i+1]%2!=0) || (nums[i]%2!=0 && nums[i+1]%2==0)  ){
            par++;
            }

        }
        if(par==nums.size()-1){
            return true;
        }
        return false;
    }
};