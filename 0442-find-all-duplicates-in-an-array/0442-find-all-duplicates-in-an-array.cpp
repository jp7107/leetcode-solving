class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>s;
        unordered_map<int, int>mp;
        for(int z: nums){
            mp[z]++;

        }
        for(auto x: mp){
            if(x.second>=2){
                s.push_back(x.first);
            }
        }
    return s;
    }

};