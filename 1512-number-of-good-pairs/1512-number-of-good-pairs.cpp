class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt=0;
        unordered_map<int, int> pairs;
        // for(int i=0; i<nums.size();i++){
        //     if(pairs.find(nums[i]) != pairs.end()){}
        //          count += pairs[nums[i]];
        //     }
        //     pairs[nums[i]] = pairs[nums[i]] + 1;
        // }
        for (int x: nums) {
            cnt += pairs[x]++;
        }        
        return cnt;
    }
};