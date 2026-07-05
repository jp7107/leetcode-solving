class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int st=1,ed=n-2;
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;
            // if(nums.size()==1){return 0;}
        while(st<=ed){

            int mid = st+(ed-st) /2;
            
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
                return mid;
            }else if(nums[mid]<nums[mid+1]){
                st=mid+1;

            }else{
                ed=mid-1;
            }
        }
        return -1;
    }
};