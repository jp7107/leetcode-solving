class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        string s;

        for(int i=0; i<nums.size(); i++){
            s=to_string(nums[i]);
            for(char c: s){
                ans.push_back(c - '0');
            }

        }
        return ans;
        


        // vector<int > ans;

        // for(int i=0; i<nums.size(); i++){
        //     vector<int > temp;
        //     int p = nums[i];
        //     // if(p == 0) {
        //     //     ans.push_back(0);
               
        //     // }
        //     while(p>0){
        //         temp.push_back(p%10);
        //         p/=10;
        //     }
        //     reverse(temp.begin(), temp.end());

        //     for(auto x : temp){
        //         ans.push_back(x);
        //     }
        // }
        // return ans;
    }
};