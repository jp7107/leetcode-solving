class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int posIdx=0, negIdx=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negIdx] = nums[i];
                negIdx +=2;
            }
            else{
                ans[posIdx] = nums[i];
                posIdx +=2;
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> v1;   // positives
//         vector<int> v2;   // negatives
        
//         for (auto x : nums) {
//             if (x > 0)
//                 v1.push_back(x);
//             else
//                 v2.push_back(x);
//         }
//         // result array
//         vector<int> v3;
  
//         // place alternatively
//         for (int i = 0; i < n; i++) {
//             if (i % 2 == 0)
//                 v3.push_back(v1[i/2]);
//             else
//                 v3.push_back(v2[i/2]);
//         }

//         return v3;
//     }
// };