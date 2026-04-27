class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        vector<int > asc;
        vector<int > desc;
        long long ascSum=0;
        long long descSum=0;

        int peakIndex = max_element(nums.begin(), nums.end()) - nums.begin();         

        for(int i=0; i <=peakIndex; i++){
            asc.push_back(nums [i]);
        }       
        for(int i=peakIndex ; i <nums.size(); i++){
            desc.push_back(nums [i]);
        }       
        for(auto x : asc){
            ascSum += x;
        }
               
        for(auto x : desc){
            descSum += x;
        }
        if(ascSum>descSum){
            return 0;
        }else if (ascSum < descSum){
            return 1;
        }
        return -1;


    }
};