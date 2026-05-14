class Solution {
public:
    bool isGood(vector<int>& nums) {
                sort(nums.begin(), nums.end());

        int nmax= *max_element(nums.begin(), nums.end());
        int cnt=0;
        for(int l : nums){
            if(nmax==l){
                cnt++;
            }
        }
          if(cnt !=2 ){
                return false;
            }

            unordered_map<int, int > map;
        for(int x=0; x<nums.size(); x++){
            map[nums[x]]++;

        }
        
        for(int i=1; i<nmax; i++){

            if(map[i] != 1){
                return false;
            }
        
        }
        
       return true;
    }
};