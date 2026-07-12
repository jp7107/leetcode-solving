class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for(int x : nums){
            if(s.find(x) != s.end()){
                return x;
            }
            //imp
            s.insert(x);
        }
        return {};
        // unordered_map<int, int>mp;
        // for(int x : nums){
        //     mp[x]++;
        //     if(mp[x] >= 2){
        //         return x;
        //     }
        // }
        // return {};
        

    }
};