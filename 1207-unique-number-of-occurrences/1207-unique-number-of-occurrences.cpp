class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>map;
        unordered_map<int,int>map2;
        for(auto x: arr){
            map[x]++;

        }
        for(auto n: map){
            int val=n.second;

            map2[val]++;
           
        }
        int cnt=0;
        for(auto c:map2){
            if(c.second ==1){
                cnt++;
            }
        }
        return cnt==map2.size();
    }
};