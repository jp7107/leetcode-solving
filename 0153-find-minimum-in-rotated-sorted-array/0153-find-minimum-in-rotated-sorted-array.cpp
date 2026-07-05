class Solution {
public:
    int findMin(vector<int>& nums) {

        int st=0,ed=nums.size()-1;

        while(st<ed){

            int mid = st+(ed-st)/2;

            if (nums[ed]<nums[mid]){
                st=mid+1;
            }else{
                ed=mid;
            }
        }

        return nums[st];
    }
};