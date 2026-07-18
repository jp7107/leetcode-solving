// class Solution {
// public:
//     static int maxDistance(vector<int>& nums1, vector<int>& nums2) {
//         const int n1=nums1.size(), n2=nums2.size();
//         int dist=0;

//         int i=0, j=0;

//         while ( i<n1 && j<n2 ){

//             if (i<=j && nums1[i]<=nums2[j]) {
//                 dist=max(dist, j-i);
//                 j++;
//             }
//             else if (i<=j) {
//                 i++;
//             }
//             else{
//                  j++;    
//             } 
//         }
//         return dist;
//     }
// };
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int ans = 0;

        for (int i = 0; i < nums1.size(); i++) {
            int low = i, high = n - 1;
            int best = i - 1;

            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (nums2[mid] >= nums1[i]) {
                    best = mid;      
                    low = mid + 1;   
                } else {
                    high = mid - 1;
                }
            }

            ans = max(ans, best - i);
        }

        return ans;
    }
};