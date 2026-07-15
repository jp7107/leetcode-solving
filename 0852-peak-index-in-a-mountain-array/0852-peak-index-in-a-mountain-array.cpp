// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int st = 1,ed = arr.size()-2;
//         while(st<=ed){
//             int mid = st+(ed-st)/2;

//             if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
//                 return mid;
//             }
//             else if(arr[mid-1]<arr[mid]){
//                 st= mid+1;
//             }else{
//                 ed= mid-1;
//             }
//         }
//         return -1;
        
//     }
// };
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int st = 0, ed = nums.size() - 1;

        while (st < ed) {
            int mid = st + (ed - st) / 2;

            if (nums[mid] < nums[mid + 1])
                st = mid + 1;
            else
                ed = mid;
        }

        return st;
    }
};