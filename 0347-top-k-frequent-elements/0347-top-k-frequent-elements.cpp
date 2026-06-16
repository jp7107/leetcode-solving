class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int >mp;

        vector<int> v;

        for(int x: nums ){
            mp[x]++;
        }
        while (k--) {
            int mxFreq = 0;
            int element = 0;

            for (auto &p : mp) {
                if (p.second > mxFreq) {
                    mxFreq = p.second;
                    element = p.first;
                }
            }

            v.push_back(element);
            mp.erase(element);   // remove it so next maximum can be found
        }


        

        return v;
     
    
  
        
    }
};