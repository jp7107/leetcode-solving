class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
//         unordered_map<int, int> mp;
//         mp[0] = 1;  // prefix sum zero occurs once
        
//         int prefix = 0, count = 0;
        
//         for(int x : nums) {
//             prefix += x;
            
//             if(mp.count(prefix - k)) {
//                 count += mp[prefix - k];
//             }
            
//             mp[prefix]++;
//         }
        
//         return count;
//     }
// };

        //-----------------
        int n=nums.size();
        int count =0;

        for(int i=0; i<n; i++){
            int sum =0;
            for(int j=i; j<n; j++){
                sum +=nums[j];
                if(sum == k ) count++;
                
            }
    }
    return count;
    }};